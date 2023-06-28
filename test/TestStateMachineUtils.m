classdef TestStateMachineUtils < matlab.unittest.TestCase
    methods(Test)
        function testLoadEventsFromTxt(testCase)                        
            % Test read the txt file with all events
            addpath model
            addpath utils
            data = StateMachineUtils;
            data = data.readAllEvents('resources/other/allevents.txt');
            
            % When:
            eventsArray = data.eventsArray;
            
            % Asserts that:
            exp = load("resources/matfiles/expectedEvents.mat");
            testCase.assertEqual(eventsArray, int32(exp.expectedEvents));

        end

        function testLoadEventsFromAds(testCase)
            % Test read the txt file with all events
            addpath model
            addpath utils
            data = StateMachineUtils;
            data = data.loadEventsInAds('resources/tct/ALLEVENT.ADS');
            
            % Asserts that
            exp = load("resources/matfiles/expectedEvents.mat");
            testCase.assertEqual(data.eventsArray, int32(exp.expectedEvents));
        end
        
        function testLoadTransitionsInPds(testCase)
            addpath model
            addpath utils
            data = StateMachineUtils;
            data = data.loadTransitionsInAds('resources/tct/SIMSUP1_MG1.ADS');

            % Asserts that
            exp = load("resources/matfiles/transitions.mat");
            testCase.verifyEqual(data.transitions, int32(exp.transitions));

        end

        function testReadTransitions(testCase)                             % check
            % Test if the transitions matrix is created.
            addpath model
            addpath utils
            data = StateMachineUtils;
            data = data.readTransitions('resources/other/transitions.txt');
            
            % When
            transitions = data.transitions();
            
            % Asserts that
            exp = load("resources/matfiles/transitions.mat");
            testCase.verifyEqual(transitions, int32(exp.transitions));
        end

        function testLoadDisabledEvents(testCase)
            addpath model
            addpath utils
            data = StateMachineUtils;
            data = data.loadDisabledEventsInPdt('resources/tct/DATA_SIMSUP1_MG1.PDT');
            
            % When
            switchedOffEvents = data.switchedOffEvents;

            % Asserts that
            exp = load('resources/matfiles/switchedOffEvents.mat');
            
            % state 0
            actual = switchedOffEvents{1,1};
            expected = exp.switchedOffEvents{1,1};
            
            testCase.verifyEqual(actual, expected);
            
        end
        
        function testReadSwitchedOffEvents(testCase)                       
            addpath model
            addpath utils
            data = StateMachineUtils;
            data = data.readSwitchedOffEvents('resources/other/switchedOffEvents.csv');
            
            % When
            switchedOffEvents = data.switchedOffEvents;

            % Asserts that
            exp = load('resources/matfiles/switchedOffEvents.mat');
            
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

        function testCreateStatesArrayWithFiles(testCase)
            addpath model
            addpath utils
            data = StateMachineUtils;

            data = data.loadEventsInAds('resources/tct/ALLEVENT.ADS');
            
            data = data.loadDisabledEventsInPdt('resources/tct/supervisor1/DATA_SIMSUP1_MG1.PDT');

            data = data.loadTransitionsInAds('resources/tct/supervisor1/SIMSUP1_MG1.ADS');

            actualStateArray = data.statesArray;

            expectedActiveEvents = logical([0;1;0;1;0;1;1;0;1;0;1;1;1;1;1;1;0;1;0;1;1;1;1;0;1]);
            
            expectedState = State(0, "s0", expectedActiveEvents);
            
            % Match state 0.
            testCase.assertEqual(actualStateArray{1}.number, expectedState.number);
            testCase.assertEqual(actualStateArray{1}.name, expectedState.name);
            testCase.assertEqual(actualStateArray{1}.activeEvents, expectedState.activeEvents);

            testCase.assertEqual(numel(actualStateArray), 6);
            
        end
    end
    
end