classdef TestStateMachine < matlab.unittest.TestCase

    methods(Test)
        function testSetState(testCase)
            addpath model
            addpath utils

            % Given the following list of states.
            s0 = State(0, 's0', [1, 1, 0, 0]);
            s1 = State(1, 's1', [1, 0, 0, 0]);
            s2 = State(2, 's2', [1, 1, 1, 0]);
            eventsArray = [1, 2, 3, 4];
            transitions = [0, 1, 0; 0, 2, 1; 1, 3, 2];

            stateMachine = StateMachine({s0, s1, s2}, transitions, eventsArray);
            s = stateMachine.currentState;
            
            % Asserts that the default state is 0.
            testCase.verifyEqual(s.number, 0);
            testCase.verifyEqual(s.activeEvents, logical([1, 1, 0, 0]));

            % Set state to 1.
            stateMachine.stateNumber = 1;

            s = stateMachine.currentState;

            % Asserts that the default state is 1.
            testCase.verifyEqual(s.number, 1);
            testCase.verifyEqual(s.activeEvents, logical([1, 0, 0, 0]));

        end

        function testLoadDataFromFilesAndSetState(testCase)
            addpath model
            addpath utils

            utils = StateMachineUtils;

            utils = utils.readAllEvents('resources/other/allevents.txt');
            
            utils = utils.readSwitchedOffEvents('resources/other/switchedOffEvents.csv');

            utils = utils.readTransitions('resources/other/transitions.txt');
            
            stateMachine = StateMachine( ...
                utils.statesArray, utils.transitions, utils.eventsArray);
            
            % When
            stateMachine.stateNumber = 1;
            
            % Asserts that state 1.
            % event = int32([1;3;11;12;13;14;16;21;23;25;27;31;32;33;34;36;41;43;51;52;54;56;58;61;63]);
            % 1:   1   11   13   23   25   27   31   33   41   51   61
            expectedActiveEvents = logical([0;1;0;1;0;1;1;1;0;0;0;0;1;0;1;1;0;1;0;1;1;1;1;0;1]);
            
            % Asserts that
            testCase.verifyEqual(stateMachine.currentState.number, 1);
            testCase.verifyEqual(stateMachine.currentState.activeEvents, expectedActiveEvents);

            % State 2
            stateMachine.stateNumber = 2;
            %event = [1;3;11;12;13;14;16;21;23;25;27;31;32;33;34;36;41;43;51;52;54;56;58;61;63];
            % 2:   1   11   13   21   27   31   33   41   51   61
            expectedActiveEvents = logical([0;1;0;1;0;1;1;0;1;1;0;0;1;0;1;1;0;1;0;1;1;1;1;0;1]);

            % Asserts that
            testCase.verifyEqual(stateMachine.currentState.number, 2);
            testCase.verifyEqual(stateMachine.currentState.activeEvents, expectedActiveEvents);
            
            % State 3
            stateMachine.stateNumber = 3;
            % event = int32([1;3;11;12;13;14;16;21;23;25;27;31;32;33;34;36;41;43;51;52;54;56;58;61;63]);
            % 3:   1   13   23   33   41   51   61
            expectedActiveEvents = logical([0;1;1;1;0;1;1;1;0;1;1;1;1;0;1;1;0;1;0;1;1;1;1;0;1]);
                        
            % Asserts that
            testCase.verifyEqual(stateMachine.currentState.number, 3);
            testCase.verifyEqual(stateMachine.currentState.activeEvents, expectedActiveEvents);
            
            % State 4
            stateMachine.stateNumber = 4;
            % event = [1;3;11;12;13;14;16;21;23;25;27;31;32;33;34;36;41;43;51;52;54;56;58;61;63];
            % 4:   1   11   27   31   41   51   61 
            expectedActiveEvents = logical([0;1;0;1;1;1;1;1;1;1;0;0;1;1;1;1;0;1;0;1;1;1;1;0;1]);
            
            % Asserts that
            testCase.verifyEqual(stateMachine.currentState.number, 4);
            testCase.verifyEqual(stateMachine.currentState.activeEvents, expectedActiveEvents);
            
            % State 5
            stateMachine.stateNumber = 5;
            % event = int32([1;3;11;12;13;14;16;21;23;25;27;31;32;33;34;36;41;43;51;52;54;56;58;61;63]);
            % 5:   1   11   13   31   33   41   51   61
            expectedActiveEvents = logical([0;1;0;1;0;1;1;1;1;1;1;0;1;0;1;1;0;1;0;1;1;1;1;0;1]);
                        
            % Asserts that
            testCase.verifyEqual(stateMachine.currentState.number, 5);
            testCase.verifyEqual(stateMachine.currentState.activeEvents, expectedActiveEvents);

        end
        
        function testLoadDataFromTctFilesAndSetState(testCase)
            addpath model
            addpath utils

            % Test using the TCT auto-generated files.
            utils = StateMachineUtils;

            utils = utils.loadEventsInAds('resources/tct/ALLEVENT.ADS');

            utils = utils.loadDisabledEventsInPdt('resources/tct/supervisor1/DATA_SIMSUP1_MG1.PDT');

            utils = utils.loadTransitionsInAds('resources/tct/supervisor1/SIMSUP1_MG1.ADS');

            stateMachine = StateMachine( ...
                utils.statesArray, utils.transitions, utils.eventsArray);
            
            % When
            stateMachine.stateNumber = 1;
            
            % Asserts that state 1.
            % event = int32([1;3;11;12;13;14;16;21;23;25;27;31;32;33;34;36;41;43;51;52;54;56;58;61;63]);
            % 1:   1   11   13   23   25   27   31   33   41   51   61
            expectedActiveEvents = logical([0;1;0;1;0;1;1;1;0;0;0;0;1;0;1;1;0;1;0;1;1;1;1;0;1]);
            
            % Asserts that
            testCase.verifyEqual(stateMachine.currentState.number, 1);
            testCase.verifyEqual(stateMachine.currentState.activeEvents, expectedActiveEvents);

            % State 2
            stateMachine.stateNumber = 2;
            %event = [1;3;11;12;13;14;16;21;23;25;27;31;32;33;34;36;41;43;51;52;54;56;58;61;63];
            % 2:   1   11   13   21   27   31   33   41   51   61
            expectedActiveEvents = logical([0;1;0;1;0;1;1;0;1;1;0;0;1;0;1;1;0;1;0;1;1;1;1;0;1]);

            % Asserts that
            testCase.verifyEqual(stateMachine.currentState.number, 2);
            testCase.verifyEqual(stateMachine.currentState.activeEvents, expectedActiveEvents);
            
            % State 3
            stateMachine.stateNumber = 3;
            % event = int32([1;3;11;12;13;14;16;21;23;25;27;31;32;33;34;36;41;43;51;52;54;56;58;61;63]);
            % 3:   1   13   23   33   41   51   61
            expectedActiveEvents = logical([0;1;1;1;0;1;1;1;0;1;1;1;1;0;1;1;0;1;0;1;1;1;1;0;1]);
                        
            % Asserts that
            testCase.verifyEqual(stateMachine.currentState.number, 3);
            testCase.verifyEqual(stateMachine.currentState.activeEvents, expectedActiveEvents);
            
            % State 4
            stateMachine.stateNumber = 4;
            % event = [1;3;11;12;13;14;16;21;23;25;27;31;32;33;34;36;41;43;51;52;54;56;58;61;63];
            % 4:   1   11   27   31   41   51   61 
            expectedActiveEvents = logical([0;1;0;1;1;1;1;1;1;1;0;0;1;1;1;1;0;1;0;1;1;1;1;0;1]);
            
            % Asserts that
            testCase.verifyEqual(stateMachine.currentState.number, 4);
            testCase.verifyEqual(stateMachine.currentState.activeEvents, expectedActiveEvents);
            
            % State 5
            stateMachine.stateNumber = 5;
%             event = int32([1;3;11;12;13;14;16;21;23;25;27;31;32;33;34;36;41;43;51;52;54;56;58;61;63]);
            % 5:   1   11   13   31   33   41   51   61
            expectedActiveEvents = logical([0;1;0;1;0;1;1;1;1;1;1;0;1;0;1;1;0;1;0;1;1;1;1;0;1]);
                        
            % Asserts that
            testCase.verifyEqual(stateMachine.currentState.number, 5);
            testCase.verifyEqual(stateMachine.currentState.activeEvents, expectedActiveEvents);

        end

        function testDefaultState(testCase)
            addpath model
            addpath utils

            utils = StateMachineUtils;

            utils = utils.loadEventsInAds('resources/tct/ALLEVENT.ADS');

            utils = utils.loadDisabledEventsInPdt('resources/tct/supervisor1/DATA_SIMSUP1_MG1.PDT');

            utils = utils.loadTransitionsInAds('resources/tct/supervisor1/SIMSUP1_MG1.ADS');
            
            % When
            stateMachine = StateMachine( ...
                utils.statesArray, utils.transitions, utils.eventsArray);
            
            % Asserts that.
            %event = [1;3;11;12;13;14;16;21;23;25;27;31;32;33;34;36;41;43;51;52;54;56;58;61;63];
            
            expectedActiveEvents = logical([0;1;0;1;0;1;1;0;1;0;1;1;1;1;1;1;0;1;0;1;1;1;1;0;1]);
                       
            % Asserts that
            testCase.verifyEqual(stateMachine.currentState.number, 0);
            testCase.verifyEqual(stateMachine.currentState.activeEvents, expectedActiveEvents);
        end

        function testInputEvent(testCase)
            addpath model
            addpath utils

            utils = StateMachineUtils;

            utils = utils.loadEventsInAds('resources/tct/ALLEVENT.ADS');

            utils = utils.loadDisabledEventsInPdt('resources/tct/supervisor1/DATA_SIMSUP1_MG1.PDT');

            utils = utils.loadTransitionsInAds('resources/tct/supervisor1/SIMSUP1_MG1.ADS');
            
            % When
            stateMachine = StateMachine( ...
                utils.statesArray, utils.transitions, utils.eventsArray);
            
            % When receive event 36 as input.
            stateMachine.inputEvent = 36;

            % Asserts that the state is 2.
            % event = int32([1;3;11;12;13;14;16;21;23;25;27;31;32;33;34;36;41;43;51;52;54;56;58;61;63]);
            % 2:   1   11   13   21   27   31   33   41   51   61
            expectedActiveEvents = logical([0;1;0;1;0;1;1;0;1;1;0;0;1;0;1;1;0;1;0;1;1;1;1;0;1]);

            % Asserts that
            testCase.verifyEqual(stateMachine.currentState.number, 2);
            testCase.verifyEqual(stateMachine.currentState.activeEvents, expectedActiveEvents);

            % When
            stateMachine.stateNumber = 0;

            stateMachine.inputEvent = 32;

            % Asserts that
            testCase.verifyEqual(stateMachine.currentState.number, 1);
        end

        function testInputsEventsOutsideOfTransitionsArray(testCase)
            addpath model
            addpath utils

            % Test the events not specified in the transitions array.
            % Given the following list of states:
            s0 = State(0, 's0', [1, 1, 0, 0]);
            s1 = State(1, 's1', [1, 0, 0, 0]);
            s2 = State(2, 's2', [1, 1, 1, 0]);
            eventsArray = [1, 2, 3, 4];
            transitions = [0, 1, 0; 0, 2, 1; 1, 3, 2];
            
            % And subsequent state machine:
            stateMachine = StateMachine({s0; s1; s2}, transitions, eventsArray);

            % When the state is 0 and an event 3 occurs:
            testCase.verifyEqual(stateMachine.currentState.number, 0);

            stateMachine.inputEvent = 3;

            testCase.verifyEqual(stateMachine.currentState.number, 0);
            
        end

    end
end