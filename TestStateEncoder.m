classdef TestStateEncoder < matlab.unittest.TestCase
    methods(Test)
        function testEncodeStatesArray(testCase)
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
    end
end