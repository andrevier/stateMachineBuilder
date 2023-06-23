classdef TestStateMachineUtils < matlab.unittest.TestCase
    methods(Test)
        function testReadEvents(testCase)                                  %check
            % Test read the txt file with all events
            data = StateMachineUtils;
            data = data.readAllEvents('resources/other/allevents.txt');
            
            % When:
            eventsArray = data.getEventsArray();
            
            % Asserts that:
            exp = load("test/expectedEvents.mat");
            testCase.assertEqual(eventsArray, exp.expectedEvents);

        end

        function testLoadEventsFromAds(testCase)
            % Test read the txt file with all events
            data = StateMachineUtils;
            data = data.loadEventsInAds('resources/tct/ALLEVENT.ADS');
            
            % Asserts that
            exp = load("test/expectedEvents.mat");
            testCase.assertEqual(data.getEventsArray(), exp.expectedEvents);
        end
        
        function testLoadTransitionsInPds(testCase)
            utils = StateMachineUtils;
            utils = utils.loadTransitionsInAds('resources/tct/SIMSUP1_MG1.ADS');

            % Asserts that
            exp = load("test/transitions.mat");
            testCase.verifyEqual(utils.getTransitions, exp.transitions);

        end

        function testReadTransitions(testCase)                             % check
            % Test if the transitions matrix is created.
            data = StateMachineUtils;
            data = data.readTransitions('resources/other/transitions.txt');
            
            % When
            transitions = data.getTransitions();
            
            % Asserts that
            exp = load("test/transitions.mat");
            testCase.verifyEqual(transitions, exp.transitions);
        end

        function testLoadDisabledEvents(testCase)
            data = StateMachineUtils;
            data = data.loadDisabledEventsInPdt('resources/tct/DATA_SIMSUP1_MG1.PDT');
            
            % When
            switchedOffEvents = data.getSwitchedOffEvents();

            % Asserts that
            exp = load('test/switchedOffEvents.mat');
            
            % state 0
            actual = switchedOffEvents{1,1};
            expected = exp.switchedOffEvents{1,1};
            
            testCase.verifyEqual(actual, expected);
            
        end
        
        function testReadSwitchedOffEvents(testCase)                       % check
            data = StateMachineUtils;
            data = data.readSwitchedOffEvents('resources/other/switchedOffEvents.csv');
            
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

        function testCreateStatesArrayWithFiles(testCase)
            utils = StateMachineUtils;

            utils = utils.loadEventsInAds('resources/tct/ALLEVENT.ADS');
            
            utils = utils.loadDisabledEventsInPdt('resources/tct/DATA_SIMSUP1_MG1.PDT');

            utils = utils.loadTransitionsInAds('resources/tct/SIMSUP1_MG1.ADS');

            actualStateArray = utils.getStatesArray();

            expectedActiveEvents = logical([0;1;0;1;0;1;1;0;1;0;1;1;1;1;1;1;0;1;0;1;1;1;1;0;1]);
            
            expectedState = State(0, "s0", expectedActiveEvents);
            
            % Match state 0.
            testCase.assertEqual(actualStateArray(1).getNumber(), expectedState.getNumber());
            testCase.assertEqual(actualStateArray(1).getName(), expectedState.getName());
            testCase.assertEqual(actualStateArray(1).getActiveEvents(), expectedState.getActiveEvents);

            testCase.assertEqual(numel(actualStateArray), 6);
            
        end
    end
    
end