clc;clear;

utils = StateMachineUtils;

utils = utils.readAllEvents('resources/other/allevents.txt');

utils = utils.readSwitchedOffEvents('resources/other/switchedOffEvents.csv');

utils = utils.readTransitions('resources/other/transitions.txt');
utils = utils.createStatesCell();

statesCell = utils.getStatesCell();