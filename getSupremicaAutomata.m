function automata = getSupremicaAutomata(xmlfilename)

model = readstruct(xmlfilename);
automata = model.Automaton;
