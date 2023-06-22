classdef TestStateMachine < matlab.unittest.TestCase

    methods(Test)
        function testSetState(testCase)
            s0 = State(0, 's0', [1, 1, 0, 0]);
            s1 = State(1, 's1', [1, 0, 0, 0]);
            s2 = State(2, 's2', [1, 1, 1, 0]);
            eventsArray = [1, 2, 3, 4];
            transitions = [0, 1, 0; 0, 2, 1; 1, 3, 2];

            stateMachine = StateMachine([s0, s1, s2], transitions, eventsArray);
            s = stateMachine.getCurrentState();
            
            % Asserts that the default state is 0.
            testCase.verifyEqual(s.number, 0);
            testCase.verifyEqual(s.activeEvents, [1, 1, 0, 0]);

            % Set state to 1.
            stateMachine = stateMachine.setState(1);

            s = stateMachine.getCurrentState();

            % Asserts that the default state is 1.
            testCase.verifyEqual(s.number, 1);
            testCase.verifyEqual(s.activeEvents, [1, 0, 0, 0]);

        end

        function testSetStateFromFiles(testCase)                                    % test

            utils = StateMachineUtils;

            utils = utils.readAllEvents('resources/other/allevents.txt');
            utils = utils.createEventsTable();

            utils = utils.readSwitchedOffEvents('resources/other/switchedOffEvents.csv');

            utils = utils.readTransitions('resources/other/transitions.txt');
            
            % Divide the table eventsTable into two arrays to initialize
            % the StateMachine object.
            eventsTable = utils.getEventsTable();
            eventsArray = eventsTable.event;

            state = StateMachine( ...
                eventsArray, ...
                utils.getSwitchedOffEvents(), ...
                utils.getTransitions());
            
            % When
            state = state.setState(1);
            
            % Asserts that state 1.
            % event = int32([1;3;11;12;13;14;16;21;23;25;27;31;32;33;34;36;41;43;51;52;54;56;58;61;63]);
            % 1:   1   11   13   23   25   27   31   33   41   51   61
            expectedActiveEvents = logical([0;1;0;1;0;1;1;1;0;0;0;0;1;0;1;1;0;1;0;1;1;1;1;0;1]);
            
            % Asserts that
            testCase.verifyEqual(state.getCurrentState(), 1);
            testCase.verifyEqual(state.getActiveEvents(), expectedActiveEvents);

            % State 2
            state = state.setState(2);
            %event = [1;3;11;12;13;14;16;21;23;25;27;31;32;33;34;36;41;43;51;52;54;56;58;61;63];
            % 2:   1   11   13   21   27   31   33   41   51   61
            expectedActiveEvents = logical([0;1;0;1;0;1;1;0;1;1;0;0;1;0;1;1;0;1;0;1;1;1;1;0;1]);

            % Asserts that
            testCase.verifyEqual(state.getCurrentState(), 2);
            testCase.verifyEqual(state.getActiveEvents(), expectedActiveEvents);
            
            % State 3
            state = state.setState(3);
            % event = int32([1;3;11;12;13;14;16;21;23;25;27;31;32;33;34;36;41;43;51;52;54;56;58;61;63]);
            % 3:   1   13   23   33   41   51   61
            expectedActiveEvents = logical([0;1;1;1;0;1;1;1;0;1;1;1;1;0;1;1;0;1;0;1;1;1;1;0;1]);
                        
            % Asserts that
            testCase.verifyEqual(state.getCurrentState(), 3);
            testCase.verifyEqual(state.getActiveEvents(), expectedActiveEvents);
            
            % State 4
            state = state.setState(4);
            % event = [1;3;11;12;13;14;16;21;23;25;27;31;32;33;34;36;41;43;51;52;54;56;58;61;63];
            % 4:   1   11   27   31   41   51   61 
            expectedActiveEvents = logical([0;1;0;1;1;1;1;1;1;1;0;0;1;1;1;1;0;1;0;1;1;1;1;0;1]);
            
            % Asserts that
            testCase.verifyEqual(state.getCurrentState(), 4);
            testCase.verifyEqual(state.getActiveEvents(), expectedActiveEvents);
            
            % State 5
            state = state.setState(5);
%             event = int32([1;3;11;12;13;14;16;21;23;25;27;31;32;33;34;36;41;43;51;52;54;56;58;61;63]);
            % 5:   1   11   13   31   33   41   51   61
            expectedActiveEvents = logical([0;1;0;1;0;1;1;1;1;1;1;0;1;0;1;1;0;1;0;1;1;1;1;0;1]);
                        
            % Asserts that
            testCase.verifyEqual(state.getCurrentState(), 5);
            testCase.verifyEqual(state.getActiveEvents(), expectedActiveEvents);

        end
        
        function testSetStateWithDataFromTctFiles(testCase)
            % Test using the TCT auto-generated files.
            utils = StateMachineUtils;

            utils = utils.loadEventsInAds('resources/tct/ALLEVENT.ADS');
            utils = utils.createEventsTable();

            utils = utils.loadDisabledEventsInPdt('resources/tct/DATA_SIMSUP1_MG1.PDT');

            utils = utils.loadTransitionsInAds('resources/tct/SIMSUP1_MG1.ADS');

            % Divide the table eventsTable into two arrays to initialize
            % the StateMachine object.
            eventsTable = utils.getEventsTable();
            eventsArray = eventsTable.event;

            state = StateMachine( ...
                eventsArray, ...
                utils.getSwitchedOffEvents(), ...
                utils.getTransitions());

            % When
            state = state.setState(1);
            
            % Asserts that state 1.
            % event = [1;3;11;12;13;14;16;21;23;25;27;31;32;33;34;36;41;43;51;52;54;56;58;61;63];
            % 1:   1   11   13   23   25   27   31   33   41   51   61
            expectedActiveEvents = logical([0;1;0;1;0;1;1;1;0;0;0;0;1;0;1;1;0;1;0;1;1;1;1;0;1]);
            
            % Asserts that
            testCase.verifyEqual(state.getCurrentState(), 1);
            testCase.verifyEqual(state.getActiveEvents(), expectedActiveEvents);

            % When
            state = state.setState(4);
            
            % Asserts that the eventsTable is from the 4.
            % event = int32([1;3;11;12;13;14;16;21;23;25;27;31;32;33;34;36;41;43;51;52;54;56;58;61;63]);
            % 4:   1   11   27   31   41   51   61
            expectedActiveEvents = logical([0;1;0;1;1;1;1;1;1;1;0;0;1;1;1;1;0;1;0;1;1;1;1;0;1]);

            % Asserts that
            testCase.verifyEqual(state.getCurrentState(), 4);
            testCase.verifyEqual(state.getActiveEvents(), expectedActiveEvents);
        end

        function testDefaultState(testCase)
             utils = StateMachineUtils;

            utils = utils.readAllEvents('resources/other/allevents.txt');
            utils = utils.createEventsTable();

            utils = utils.readSwitchedOffEvents('resources/other/switchedOffEvents.csv');

            utils = utils.readTransitions('resources/other/transitions.txt');
            
            % Divide the table eventsTable into two arrays to initialize
            % the StateMachine object.
            eventsTable = utils.getEventsTable();
            eventsArray = eventsTable.event;

            state = StateMachine( ...
                eventsArray, ...
                utils.getSwitchedOffEvents(), ...
                utils.getTransitions());

            % Asserts that.
            %event = [1;3;11;12;13;14;16;21;23;25;27;31;32;33;34;36;41;43;51;52;54;56;58;61;63];
            
            expectedActiveEvents = logical([0;1;0;1;0;1;1;0;1;0;1;1;1;1;1;1;0;1;0;1;1;1;1;0;1]);
                       
            % Asserts that
            testCase.verifyEqual(state.getCurrentState(), 0);
            testCase.verifyEqual(state.getActiveEvents(), expectedActiveEvents);
        end

        function testSetEvent(testCase)
            utils = StateMachineUtils;

            utils = utils.readAllEvents('resources/other/allevents.txt');
            utils = utils.createEventsTable();

            utils = utils.readSwitchedOffEvents('resources/other/switchedOffEvents.csv');

            utils = utils.readTransitions('resources/other/transitions.txt');
            
            % Divide the table eventsTable into two arrays to initialize
            % the StateMachine object.
            eventsTable = utils.getEventsTable();
            eventsArray = eventsTable.event;

            state = StateMachine( ...
                eventsArray, ...
                utils.getSwitchedOffEvents(), ...
                utils.getTransitions());

            % When receive event 36 as input.
            state = state.setEvent(36);

            % Asserts that the state is 2.
            % event = int32([1;3;11;12;13;14;16;21;23;25;27;31;32;33;34;36;41;43;51;52;54;56;58;61;63]);
            % 2:   1   11   13   21   27   31   33   41   51   61
            expectedActiveEvents = logical([0;1;0;1;0;1;1;0;1;1;0;0;1;0;1;1;0;1;0;1;1;1;1;0;1]);

            % Asserts that
            testCase.verifyEqual(state.getCurrentState(), 2);
            testCase.verifyEqual(state.getActiveEvents(), expectedActiveEvents);
        end

        function testSetEventWithTctFiles(testCase)
            utils = StateMachineUtils;

            utils = utils.loadEventsInAds('resources/tct/ALLEVENT.ADS');
            utils = utils.createEventsTable();

            utils = utils.loadDisabledEventsInPdt('resources/tct/DATA_SIMSUP1_MG1.PDT');

            utils = utils.loadTransitionsInAds('resources/tct/SIMSUP1_MG1.ADS');

            % Divide the table eventsTable into two arrays to initialize
            % the StateMachine object.
            eventsTable = utils.getEventsTable();
            eventsArray = eventsTable.event;

            state = StateMachine( ...
                eventsArray, ...
                utils.getSwitchedOffEvents(), ...
                utils.getTransitions());
                        
            state = state.setEvent(36);
            
            % Asserts that the state is 2.
            %event = [1;3;11;12;13;14;16;21;23;25;27;31;32;33;34;36;41;43;51;52;54;56;58;61;63];
            % 2:   1   11   13   21   27   31   33   41   51   61
            expectedActiveEvents = logical([0;1;0;1;0;1;1;0;1;1;0;0;1;0;1;1;0;1;0;1;1;1;1;0;1]);
            
            % Asserts that
            testCase.verifyEqual(state.getCurrentState(), 2);
            testCase.verifyEqual(state.getActiveEvents(), expectedActiveEvents);
        end


    end
end