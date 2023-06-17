classdef TestStateMachineUtils < matlab.unittest.TestCase
    methods(Test)
        function testReadEvents(testCase)
            data = StateMachineUtils;
            data = data.readAllEvents('resources/allevents.txt');
            
            % When:
            eventsArray = data.getEventsArray();
            
            % Asserts that:
            exp = load("test/expectedEvents.mat");
            testCase.assertEqual(eventsArray, exp.expectedEvents);

        end

        function testCreateEventsTable(testCase)
            % Test if the table of events is created.
            data = StateMachineUtils;
            data = data.readAllEvents('resources/allevents.txt');
            
            % When 
            data = data.createEventsTable();           
            eventsTable = data.getEventsTable();
            
            % Assert equal
            exp = load('test/expectedEventsTable.mat');
            testCase.verifyEqual(eventsTable, exp.eventsTable);
        end

        function testReadTransitions(testCase)
            data = StateMachineUtils;
            data = data.readTransitions('resources/transitions.txt');
            
            % When
            transitions = data.getTransitions();
            
            % Asserts that
            exp = load("test/transitions.mat");
            testCase.verifyEqual(transitions, exp.transitions);
        end
        
        function testReadSwitchedOffEvents(testCase)
            data = StateMachineUtils;
            data = data.readSwitchedOffEvents('resources/switchedOffEvents.csv');
            
            % When
            switchedOffEvents = data.getSwitchedOffEvents();

            % Asserts that
            exp = load('test/switchedOffEvents.mat');
            
            % state 0
            actual = switchedOffEvents{1,1};
            expected = int32(exp.switchedOffEvents{1,1});
            
            testCase.verifyEqual(actual, expected);

            % state 1
            actual = switchedOffEvents{2,1};
            expected = int32(exp.switchedOffEvents{2,1});
            
            testCase.verifyEqual(actual, expected);

            % state 2
            actual = switchedOffEvents{3,1};
            expected = int32(exp.switchedOffEvents{3,1});
            
            testCase.verifyEqual(actual, expected);

            % state 3
            actual = switchedOffEvents{4,1};
            expected = int32(exp.switchedOffEvents{4,1});
            
            testCase.verifyEqual(actual, expected);

            % state 4
            actual = switchedOffEvents{5,1};
            expected = int32(exp.switchedOffEvents{5,1});
            
            testCase.verifyEqual(actual, expected);

            % state 5
            actual = switchedOffEvents{6,1};
            expected = int32(exp.switchedOffEvents{6,1});
            
            testCase.verifyEqual(actual, expected);
        end
    end
end