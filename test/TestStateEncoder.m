classdef TestStateEncoder < matlab.unittest.TestCase
    methods(Test)
        function testEncodeStatesArray(testCase)
            addpath model
            addpath utils
            % Given the following list of states.
            s0 = State(0, 's0', [1, 1, 0, 0]);
            s1 = State(1, 's1', [1, 0, 0, 0]);
            s2 = State(2, 's2', [1, 1, 1, 0]);
            s = {s0; s1; s2};
            actualEncodedArray = StateEncoder.encode(s);
            
            % Asserts that
            expected = [0, 1, 1, 0, 0; 1, 1, 0, 0, 0; 2, 1, 1, 1, 0];

            testCase.verifyEqual(actualEncodedArray, expected);           
        end

        function testDecodeintoStatesArray(testCase)
            addpath model
            addpath utils
            
            % When
            encodedArray = [0, 1, 1, 0, 0; 1, 1, 0, 0, 0; 2, 1, 1, 1, 0];
            actualDecodedArray = StateEncoder.decode(encodedArray);
            
            % Asserts that
            s0 = State(0, 's0', [1, 1, 0, 0]);
            s1 = State(1, 's1', [1, 0, 0, 0]);
            s2 = State(2, 's2', [1, 1, 1, 0]);            

            expectedStatesArray = {s0; s1; s2};
            
            testCase.verifyEqual(actualDecodedArray, expectedStatesArray);            
        end

        function testDecodeWithDataFromFiles(testCase)
            addpath model
            addpath utils

            utils = StateMachineUtils;

            utils = utils.loadEventsInAds('resources/tct/ALLEVENT.ADS');

            utils = utils.loadDisabledEventsInPdt('resources/tct/supervisor1/DATA_SIMSUP1_MG1.PDT');

            utils = utils.loadTransitionsInAds('resources/tct/supervisor1/SIMSUP1_MG1.ADS');
            
            stateMatrix = StateEncoder.encode(utils.statesArray);

            % 1) When
            actualStatesArray = StateEncoder.decode(stateMatrix);
            
            % Asserts that
            testCase.verifyEqual(actualStatesArray, utils.statesArray);
            
            % 2) When
            stateMachine = StateMachine( ...
                actualStatesArray, utils.transitions, utils.eventsArray);
            
            % Asserts that
            stateMachine.inputEvent = 21;
            actualStateNumber = stateMachine.currentState.number;
            testCase.verifyEqual(actualStateNumber, 0);
            
            % Asserts that [0 32 1]
            stateMachine.inputEvent = 32;
            actualStateNumber = stateMachine.currentState.number;
            testCase.verifyEqual(actualStateNumber, 1);
            
        end
    end
end