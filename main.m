clc;clear;
utils = StateMachineUtils;

utils = utils.readAllEvents('resources/allevents.txt');
utils = utils.createEventsTable();

utils = utils.readSwitchedOffEvents('resources/switchedOffEvents.csv');

utils = utils.readTransitions('resources/transitions.txt');

state = StateMachine( ...
    utils.getEventsTable(), ...
    utils.getSwitchedOffEvents(), ...
    utils.getTransitions());

state = state.setState(1);