function coppeliaScene(block)

setup(block);

%%
function setup(block)

% Register number of ports
block.NumInputPorts  = 2;
block.NumOutputPorts = 1;

% Override input port properties
for i = 1:2
    block.InputPort(i).Dimensions        = 1;
    block.InputPort(i).DatatypeID  = 0;  % double
    block.InputPort(i).Complexity  = 'Real';
    block.InputPort(i).DirectFeedthrough = true;
    block.InputPort(i).SamplingMode = 'Sample';
end

% Override output port properties
block.OutputPort(1).Dimensions       = 10;
block.OutputPort(1).DatatypeID  = 0; % double
block.OutputPort(1).Complexity  = 'Real';
block.OutputPort(1).SamplingMode = 'Sample';

% Register parameters
block.NumDialogPrms     = 0;

% Register sample times
block.SampleTimes = [0.2 0];

block.SimStateCompliance = 'DefaultSimState';

block.RegBlockMethod('Start', @Start);
block.RegBlockMethod('InitializeConditions', @InitializeConditions);
block.RegBlockMethod('Outputs', @Outputs);     % Required
block.RegBlockMethod('Terminate', @Terminate); % Required

%%
function Start(block)

rng("shuffle");
obj.client = RemoteAPIClient();
obj.sim = obj.client.getObject('sim');

assignin('base','obj',obj);
set_param(block.BlockHandle, 'UserData', obj);

%%
function InitializeConditions(block)

obj = get_param(block.BlockHandle, 'UserData');
obj.sim.startSimulation();

%%
function Outputs(block)

obj = get_param(block.BlockHandle, 'UserData');

z1 = block.InputPort(1).Data;
z2 = block.InputPort(2).Data;

obj.sim.setInt32Signal("zone1",int32(z1));
obj.sim.setInt32Signal("zone2",int32(z2));

n1 = obj.sim.getInt32Signal("next1");
n2 = obj.sim.getInt32Signal("next2");

next = zeros(1,10);
if(n1 && n2)
    idx = randi(10);
    next(idx) = 1;
end

block.OutputPort(1).Data = double(next);

%%
function Terminate(block)

obj = get_param(block.blockHandle, 'UserData');

obj.sim.stopSimulation();
