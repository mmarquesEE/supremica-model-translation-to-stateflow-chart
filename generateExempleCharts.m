clear
close
clc

%%

automaton = getSupremicaAutomata('completeModel.xml');

pathToModel = "charts";
new_system(pathToModel);

for i=1:numel(automaton)
    name = automaton(i).nameAttribute;
    pathToChart = pathToModel + "/" + name;
    
    varname=[]; inEvsTrigger = "Rising";
    bcEvents = strcmp(name,"Supervisor");
    if ~bcEvents
        varname = ["x","y"];
        inEvsTrigger = "Function call";
    end
    translateSupremicaAutomaton(automaton(i),pathToChart,...
        broadcastEvents=bcEvents,...
        varname=varname,...
        inputEventsTrigger=inEvsTrigger,...
        verbose=false);
end

open_system(pathToModel);

