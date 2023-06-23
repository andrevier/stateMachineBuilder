% Encode the data from the States class to pass it as a parameter in
% Simulink's Matlab functions block.
classdef StatesEncoder
    properties
    end
    methods
        function encodedStatesArray = encode(statesArray, activeEvents)
            % Encode the states array as a double matrix where:
            % - 1º column as the state number;
            % - 2º to the end columns is the active events indicated by the
            % position of the events and the 1 for active and 0, for
            % inactive.           
            numLines = numel(statesArray);
            numColumns = numel(activeEvents);
            encodedStatesArray = zeros(numLines, numColumns);

            for i = 1:numLines
                stateNumber = statesArray(i).getNumber();
                stateActiveEvents = statesArray(i).getActiveEvents();
                encodedStatesArray(i, 1) = stateNumber;
                encodedStatesArray(i, 2:end) = stateActiveEvents;
            end            
        end

        function statesArray = decode(encodedStatesArray)
            % Decode states array from the matrix format.
            numOfStates = size(encodedStatesArray, 1);
            statesArray = States.empty(numOfStates, 0);

            for i = 1:numOfStates
                stateNumber = encodedStatesArray(i, 1);
                stateActiveEvents = encodedStatesArray(i, 2 : end);
                stateName = "s" + num2str(stateNumber);
                statesArray(i) = State(stateNumber, stateName, stateActiveEvents);
            end
        end
    end
end