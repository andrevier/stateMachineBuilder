clc;clear;
%path = 'resources/DATA_SIMSUP1.PDT';
%path = 'resources/DATA_SIMSUP1_MG1.PDT';
% path =  'resources/DATA_SIMSUP2_MG1.PDT';
% switchOffEvents = loadDisabledEvents(path);

path = 'resources/SIMSUP1_MG1.ADS';
transitions = loadTransitions(path);
disp(transitions)
