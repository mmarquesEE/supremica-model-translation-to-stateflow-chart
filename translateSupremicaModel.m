function translateSupremicaModel(xmlfilename,varname,inferData,verbose)
%%
model = readstruct(xmlfilename);
automaton = model.Automaton;

sfnew chart

rt = sfroot;
ch = find(rt,"-isa","Stateflow.Chart");

for k = 1:numel(automaton)
    %% Add Automaton
    event = automaton(k).Events.Event;
    state = automaton(k).States.State;
    transition = automaton(k).Transitions.Transition;

    a(k) = Stateflow.State(ch);
    a(k).LabelString = automaton(k).nameAttribute;
    a(k).Position = [0 300*(k-1) 90 240];
    
    ta(k) = Stateflow.Transition(ch);
    ta(k).Destination = a(k);
    ta(k).DestinationOClock = 8;
    ta(k).SourceEndpoint = ta(k).DestinationEndpoint - [30 0];
    ta(k).Midpoint = ta(k).DestinationEndpoint - [15 0];

    %% Add states
    for i = 1:numel(state)
        if verbose, "s" + i, end

        var = split(string(state(i).nameAttribute),".");
        LabelString = ""; cont = 0;
        for m = 1:numel(var)
            name    = regexp(var(m),"[a-zA-Z]*","match");
            value   = regexp(var(m),"\d*","match");
            if isempty(name)
                cont = cont + 1;
                name = varname{k}{cont};
                LabelString = LabelString + newline + name + "=" + value + ";";
            end
        end

        a(k).Position = a(k).Position + [0 0 180 0];
        s(k,i) = Stateflow.State(ch);
        s(k,i).LabelString = "s" + (k-1) + i + LabelString;
        s(k,i).Position = [90 50 90 60] + [180*(i-1) 300*(k-1) 0 0];
        
        if ~ismissing(state(i).initialAttribute)
            t0(k) = Stateflow.Transition(ch);
            t0(k).Destination = s(k,i);
            t0(k).DestinationOClock = 8;
            t0(k).SourceEndpoint = t0(k).DestinationEndpoint - [30 0];
            t0(k).Midpoint = t0(k).DestinationEndpoint - [15 0];
        end
    end
    
    %% Add Transitions
    for i = 1:numel(transition)
        if verbose, "s" + i, end

        t(k,i) = Stateflow.Transition(ch);
        t(k,i).Source       = s(k,transition(i).sourceAttribute + 1);
        t(k,i).Destination  = s(k,transition(i).destAttribute + 1);
        t(k,i).SourceOClock = 6; t(k,i).DestinationOClock = 6;
        t(k,i).LabelString = replace(event(transition(i).eventAttribute + 1).labelAttribute,"."," ");
    end
    
    if ~inferData
        %% Add input events
        for i = 1:numel(event)
            e(k,i) = Stateflow.Event(ch);
            e(k,i).Name = erase(event(i).labelAttribute,".{"+wildcardPattern+"}");
            e(k,i).Scope = "Input";
            e(k,i).Trigger = "Rising";
        end
    
        %% Add output variables
        for i = 1:numel(varname{k})
            v(k,i) = Stateflow.Data(ch);
            v(k,i).Name = varname{k}{i};
            v(k,i).Scope = "Output";
            v(k,i).DataType = "double";
        end
    end
end


