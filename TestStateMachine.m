classdef TestStateMachine < matlab.unittest.TestCase

    methods(Test)

        function testSetState(testCase)                                    % test

            utils = StateMachineUtils;

            utils = utils.readAllEvents('resources/other/allevents.txt');
            utils = utils.createEventsTable();

            utils = utils.readSwitchedOffEvents('resources/other/switchedOffEvents.csv');

            utils = utils.readTransitions('resources/other/transitions.txt');

            state = StateMachine( ...
                utils.getEventsTable(), ...
                utils.getSwitchedOffEvents(), ...
                utils.getTransitions());
            
            % When
            state = state.setState(1);
            
            % Asserts that state 1.
            event = int32([1;3;11;12;13;14;16;21;23;25;27;31;32;33;34;36;41;43;51;52;54;56;58;61;63]);
            % 1:   1   11   13   23   25   27   31   33   41   51   61
            isActive = int32([0;1;0;1;0;1;1;1;0;0;0;0;1;0;1;1;0;1;0;1;1;1;1;0;1]);
            
            expectedEventsTable = table(event, isActive);
            
            testCase.verifyEqual(state.getCurrentState, 1);
            testCase.verifyEqual(state.getEventsTable, expectedEventsTable);

            % State 2
            state = state.setState(2);
            event = int32([1;3;11;12;13;14;16;21;23;25;27;31;32;33;34;36;41;43;51;52;54;56;58;61;63]);
            % 2:   1   11   13   21   27   31   33   41   51   61
            isActive = int32([0;1;0;1;0;1;1;0;1;1;0;0;1;0;1;1;0;1;0;1;1;1;1;0;1]);

            expectedEventsTable = table(event, isActive);

            testCase.verifyEqual(state.getCurrentState, 2);
            testCase.verifyEqual(state.getEventsTable, expectedEventsTable);
            
            % State 3
            state = state.setState(3);
            event = int32([1;3;11;12;13;14;16;21;23;25;27;31;32;33;34;36;41;43;51;52;54;56;58;61;63]);
            % 3:   1   13   23   33   41   51   61
            isActive = int32([0;1;1;1;0;1;1;1;0;1;1;1;1;0;1;1;0;1;0;1;1;1;1;0;1]);
            
            expectedEventsTable = table(event, isActive);
            
            testCase.verifyEqual(state.getCurrentState, 3);
            testCase.verifyEqual(state.getEventsTable, expectedEventsTable);
            
            % State 4
            state = state.setState(4);
            event = int32([1;3;11;12;13;14;16;21;23;25;27;31;32;33;34;36;41;43;51;52;54;56;58;61;63]);
            % 4:   1   11   27   31   41   51   61 
            isActive = int32([0;1;0;1;1;1;1;1;1;1;0;0;1;1;1;1;0;1;0;1;1;1;1;0;1]);
            
            expectedEventsTable = table(event, isActive);
            
            testCase.verifyEqual(state.getCurrentState, 4);
            testCase.verifyEqual(state.getEventsTable, expectedEventsTable);
            
            % State 5
            state = state.setState(5);
            event = int32([1;3;11;12;13;14;16;21;23;25;27;31;32;33;34;36;41;43;51;52;54;56;58;61;63]);
            % 5:   1   11   13   31   33   41   51   61
            isActive = int32([0;1;0;1;0;1;1;1;1;1;1;0;1;0;1;1;0;1;0;1;1;1;1;0;1]);
            
            expectedEventsTable = table(event, isActive);
            
            testCase.verifyEqual(state.getCurrentState, 5);
            testCase.verifyEqual(state.getEventsTable, expectedEventsTable);

        end
        
        function testSetStateWithDataFromTctFiles(testCase)
            % Test using the TCT auto-generated files.
            utils = StateMachineUtils;

            utils = utils.loadEventsInAds('resources/tct/ALLEVENT.ADS');
            utils = utils.createEventsTable();

            utils = utils.loadDisabledEventsInPdt('resources/tct/DATA_SIMSUP1_MG1.PDT');

            utils = utils.loadTransitionsInAds('resources/tct/SIMSUP1_MG1.ADS');

            state = StateMachine( ...
                utils.getEventsTable(), ...
                utils.getSwitchedOffEvents(), ...
                utils.getTransitions());
            
            % When
            state = state.setState(1);
            
            % Asserts that state 1.
            event = int32([1;3;11;12;13;14;16;21;23;25;27;31;32;33;34;36;41;43;51;52;54;56;58;61;63]);
            % 1:   1   11   13   23   25   27   31   33   41   51   61
            isActive = int32([0;1;0;1;0;1;1;1;0;0;0;0;1;0;1;1;0;1;0;1;1;1;1;0;1]);
            
            expectedEventsTable = table(event, isActive);
            
            testCase.verifyEqual(state.getCurrentState, 1);
            testCase.verifyEqual(state.getEventsTable, expectedEventsTable);

            % When
            state = state.setState(4);
            
            % Asserts that the eventsTable is from the 4.
            event = int32([1;3;11;12;13;14;16;21;23;25;27;31;32;33;34;36;41;43;51;52;54;56;58;61;63]);
            % 4:   1   11   27   31   41   51   61
            isActive = int32([0;1;0;1;1;1;1;1;1;1;0;0;1;1;1;1;0;1;0;1;1;1;1;0;1]);

            expectedEventsTable = table(event, isActive);
            
            testCase.verifyEqual(state.getCurrentState, 4);
            testCase.verifyEqual(state.getEventsTable, expectedEventsTable)
        end

        function testDefaultState(testCase)
            utils = StateMachineUtils;

            utils = utils.readAllEvents('resources/other/allevents.txt');
            utils = utils.createEventsTable();

            utils = utils.readSwitchedOffEvents('resources/other/switchedOffEvents.csv');

            utils = utils.readTransitions('resources/other/transitions.txt');

            state = StateMachine( ...
                utils.getEventsTable(), ...
                utils.getSwitchedOffEvents(), ...
                utils.getTransitions());

            % Asserts that.
            event = int32([1;3;11;12;13;14;16;21;23;25;27;31;32;33;34;36;41;43;51;52;54;56;58;61;63]);
            
            isActive = int32([0;1;0;1;0;1;1;0;1;0;1;1;1;1;1;1;0;1;0;1;1;1;1;0;1]);
           

            expectedEventsTable = table(event, isActive);
            
            % Asserts that
            testCase.verifyEqual(state.getCurrentState, 0);
            testCase.verifyEqual(state.getEventsTable, expectedEventsTable);
        end

        function testSetEvent(testCase)
            utils = StateMachineUtils;

            utils = utils.readAllEvents('resources/other/allevents.txt');
            utils = utils.createEventsTable();

            utils = utils.readSwitchedOffEvents('resources/other/switchedOffEvents.csv');

            utils = utils.readTransitions('resources/other/transitions.txt');

            state = StateMachine( ...
                utils.getEventsTable(), ...
                utils.getSwitchedOffEvents(), ...
                utils.getTransitions());

            % When receive event 36 as input.
            state = state.setEvent(36);

            % Asserts that the state is 2.
            event = int32([1;3;11;12;13;14;16;21;23;25;27;31;32;33;34;36;41;43;51;52;54;56;58;61;63]);
            % 2:   1   11   13   21   27   31   33   41   51   61
            isActive = int32([0;1;0;1;0;1;1;0;1;1;0;0;1;0;1;1;0;1;0;1;1;1;1;0;1]);

            expectedEventsTable = table(event, isActive);


            testCase.verifyEqual(state.getCurrentState, int32(2));
            testCase.verifyEqual(state.getEventsTable, expectedEventsTable);
        end

        function testSetEventWithTctFiles(testCase)
            utils = StateMachineUtils;

            utils = utils.loadEventsInAds('resources/tct/ALLEVENT.ADS');
            utils = utils.createEventsTable();

            utils = utils.loadDisabledEventsInPdt('resources/tct/DATA_SIMSUP1_MG1.PDT');

            utils = utils.loadTransitionsInAds('resources/tct/SIMSUP1_MG1.ADS');

            state = StateMachine( ...
                utils.getEventsTable(), ...
                utils.getSwitchedOffEvents(), ...
                utils.getTransitions());
            
            % When state is 0 and receive event 36 as input.
            state = state.setState(0);
            
            state = state.setEvent(36);
            
            % Asserts that the state is 2.
            event = int32([1;3;11;12;13;14;16;21;23;25;27;31;32;33;34;36;41;43;51;52;54;56;58;61;63]);
            % 2:   1   11   13   21   27   31   33   41   51   61
            isActive = int32([0;1;0;1;0;1;1;0;1;1;0;0;1;0;1;1;0;1;0;1;1;1;1;0;1]);
            
            expectedEventsTable = table(event, isActive);

            testCase.verifyEqual(state.getCurrentState, int32(2));
            testCase.verifyEqual(state.getEventsTable, expectedEventsTable);
            
            % When state is 1 and receive event 36 as input.
            state = state.setState(1);
            state = state.setEvent(36);

            % Asserts that the state is 4.
            event = int32([1;3;11;12;13;14;16;21;23;25;27;31;32;33;34;36;41;43;51;52;54;56;58;61;63]);
            % 4:   1   11   27   31   41   51   61
            isActive = int32([0;1;0;1;1;1;1;1;1;1;0;0;1;1;1;1;0;1;0;1;1;1;1;0;1]);
            expectedEventsTable = table(event, isActive);

            testCase.verifyEqual(state.getCurrentState, int32(4));
            testCase.verifyEqual(state.getEventsTable, expectedEventsTable);
        end


    end
end