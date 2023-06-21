clc;clear;

utils = StateMachineUtils;

utils = utils.loadEventsInAds('resources/tct/ALLEVENT.ADS');
utils = utils.createEventsTable();

utils = utils.loadDisabledEventsInPdt('resources/tct/DATA_SIMSUP1_MG1.PDT');

utils = utils.loadTransitionsInAds('resources/tct/SIMSUP1_MG1.ADS');

stateMachine = StateMachine( ...
    utils.getEventsTable(), ...
    utils.getSwitchedOffEvents(), ...
    utils.getTransitions());

