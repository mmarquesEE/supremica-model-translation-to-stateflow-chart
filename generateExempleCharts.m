clear
close
clc

%%

automaton = getSupremicaAutomata('supremica3robots.xml');

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
        verbose=true);
end

open_system(pathToModel);

