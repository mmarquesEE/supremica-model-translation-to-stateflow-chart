function translateSupremicaAutomaton(automaton,pathToChart,opts)
arguments
    automaton struct
    pathToChart string
    opts.varname (1,:) string = []
    opts.inputEventsTrigger string = "Function call"
    opts.broadcastEvents = false
    opts.inferData = false
    opts.verbose = false
end
%%
inputEventsTrigger = opts.inputEventsTrigger;
varname = opts.varname;
broadcastEvents = opts.broadcastEvents;
inferData = opts.inferData;
verbose = opts.verbose;

add_block("sflib/Chart",pathToChart);
ch = find(sfroot,"-isa","Stateflow.Chart",Path=pathToChart);
ch.ExecuteAtInitialization = 1;

%% Add Automaton
state = automaton.States.State;
event = automaton.Events.Event;
event = event(~contains([event.labelAttribute],"tau"));
transition = automaton.Transitions.Transition;
transition = transition(ismember([transition.eventAttribute],[event.idAttribute]));

%% Add states
for i = 1:numel(state)
    if verbose, "s" + i, end

    var = split(string(state(i).nameAttribute),".");
    LabelString = ""; cont = 0;
    for m = 1:numel(var)
        name    = regexp(var(m),"[a-zA-Z]*","match");
        value   = regexp(var(m),"\d*","match");
        if isempty(name) && ~isempty(varname)
            cont = cont + 1;
            name = varname(cont);
            LabelString = LabelString + newline + name + "=" + value + ";";
        end
    end

    s(i) = Stateflow.State(ch);
    s(i).LabelString = "s" + i + LabelString;
    s(i).Position = [90 50 90 60] + [180*(i-1) 0 0 0];
    
    if ~ismissing(state(i).initialAttribute)
        t0 = Stateflow.Transition(ch);
        t0.Destination = s(i);
        t0.DestinationOClock = 8;
        t0.SourceEndpoint = t0.DestinationEndpoint - [30 0];
        t0.Midpoint = t0.DestinationEndpoint - [15 0];
    end
end

%% Add Transitions
for i = 1:numel(transition)
    if verbose, "t" + i, end
    
    eventLabel = erase(...
        event(transition(i).eventAttribute + 1).labelAttribute,...
        [".{"+wildcardPattern+"}",".","[","]"]...
    );

    t = Stateflow.Transition(ch);
    t.Source       = s(transition(i).sourceAttribute + 1);
    t.Destination  = s(transition(i).destAttribute + 1);
    t.SourceOClock = 6; t.DestinationOClock = 6;
    if broadcastEvents
        eventLabel = eventLabel + " {send(" + eventLabel + "_o);}";
    end
    t.LabelString = eventLabel;
end

if ~inferData
    %% Add output variables
    for i = 1:numel(varname)
        v = Stateflow.Data(ch);
        v.Name = varname(i);
        v.Scope = "Output";
        v.DataType = "double";
    end

    %% Add events
    for i = 1:numel(event)
        e = Stateflow.Event(ch);
        e.Name = erase(event(i).labelAttribute,[".","[","]","{","}"]);
        e.Scope = "Input";
        e.Trigger = inputEventsTrigger;

        if broadcastEvents
            e = Stateflow.Event(ch);
            e.Name = erase(event(i).labelAttribute,[".","[","]","{","}"]) + "_o";
            e.Scope = "Output";
        end
    end
end

