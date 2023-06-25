% Encode the data from the States class to pass it as a parameter in
% Simulink's Matlab functions block.
classdef StateEncoder
    
    methods(Static)
        function encodedStatesArray = encode(statesArray)
            % Encode the states array as a double matrix where:
            % - 1º column as the state number;
            % - 2º to the end columns is the active events indicated by the
            % position of the events and the 1 for active and 0, for
            % inactive.           
            numLines = numel(statesArray);
            numColumns = numel(statesArray(1).activeEvents) + 1;
            encodedStatesArray = zeros(numLines, numColumns);

            for i = 1:numLines
                encodedStatesArray(i, 1) = statesArray(i).number;
                encodedStatesArray(i, 2:end) = statesArray(i).activeEvents;
            end            
        end

        function statesArray = decode(encodedStatesArray)
            % Decode states array from the matrix format.
            numOfStates = size(encodedStatesArray, 1);
            statesArray = State.empty(numOfStates, 0);

            for i = 1:numOfStates
                stateNumber = encodedStatesArray(i, 1);
                stateActiveEvents = encodedStatesArray(i, 2 : end);
                stateName = "s" + num2str(stateNumber);
                statesArray(i) = State(stateNumber, stateName, stateActiveEvents);
            end
        end
    end
end