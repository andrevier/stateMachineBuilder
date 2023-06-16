data = PresetEvents('resources/allevents.txt');
data = data.readAllEvents();
data = data.createEventsTable();
eventsTable = data.getEventsTable();

switchedOffEvents = readSwitchedOffEvents( ...
    'resources/switchedOffEvents.csv');

transitions = readTransitions('resources/transitions.txt');

state = StateMachine( ...
    eventsTable, switchedOffEvents, transitions);

% Change to state
state = state.setNewState(2);
% erro no 33.
state = state.setNewEvent(25);