classdef TestStateMachine < matlab.unittest.TestCase

    methods(Test)

        function testReadSwitchedOffEvents(testCase)
            switchedOffEvents = readSwitchedOffEvents( ...
                'resources/switchedOffevents.csv');
            % Asserts that
            exp = load("test\actualSwitchedOffEvents.mat");
            testCase.verifyEqual(switchedOffEvents,exp.switchedOffEvents);
        end

        function testSetNewState(testCase)

            data = PresetEvents('resources/allevents.txt');
            data = data.readAllEvents();
            data = data.createEventsTable();
            eventsTable = data.getEventsTable();

            switchedOffEvents = readSwitchedOffEvents( ...
                'resources/switchedOffEvents.csv');
            
            transitions = readTransitions('resources/transitions.txt');
            
            state = StateMachine( ...
                eventsTable, switchedOffEvents, transitions);

            % When
            state = state.setNewState(1);
            
            % Asserts that
            exp = load('test/actualState1.mat');
            testCase.verifyEqual(state, exp.state);
        end

        function testDefaultState(testCase)
            data = PresetEvents('resources/allevents.txt');
            data = data.readAllEvents();
            data = data.createEventsTable();
            eventsTable = data.getEventsTable();

            switchedOffEvents = readSwitchedOffEvents( ...
                'resources/switchedOffEvents.csv');
            
            transitions = readTransitions('resources/transitions.txt');
            
            % When
            state = StateMachine( ...
                eventsTable, switchedOffEvents, transitions);

            % Asserts that
            testCase.verifyEqual(state.getCurrentState, 0);

        end

        function testSetNewEvent(testCase)
            data = PresetEvents('resources/allevents.txt');
            data = data.readAllEvents();
            data = data.createEventsTable();
            eventsTable = data.getEventsTable();

            switchedOffEvents = readSwitchedOffEvents( ...
                'resources/switchedOffEvents.csv');
            
            transitions = readTransitions('resources/transitions.txt');
            
            state = StateMachine( ...
                eventsTable, switchedOffEvents, transitions);
            
            % When receive a new event as input.
            state = state.setNewEvent(36);

            % Asserts that
            testCase.verifyEqual(state.getCurrentState, 2);
        end
    end
end