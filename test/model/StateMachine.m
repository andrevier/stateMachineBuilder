% Finite State Machine
% Each state is defined by the number of state and a table with one column
% for events and other indicating if it is active (1) or not (0).
classdef StateMachine
    properties
        statesArray cell
        transitions double
        numberOfStates double
        eventsArray double
        stateNumber double
        stateIndex double
    end

    properties(Dependent)
        currentState State
        currentActiveEvents logical
        inputEvent double
    end

    methods
        function obj = StateMachine(statesArray, transitions, eventsArray)
            obj.statesArray = statesArray;
            obj.transitions = transitions;
            obj.numberOfStates = length(statesArray);
            obj.eventsArray = eventsArray;

            % Default state as the first.
            obj.stateNumber = statesArray{1}.number;
            obj.stateIndex = 1;

        end

        function activeEvents = get.currentActiveEvents(obj)
            activeEvents = obj.currentState.activeEvents;
        end

        function obj = set.inputEvent(obj, eventNumber)
            % Determine the state number and the active events in the
            % state machine according to the new event (eventNumber).
            % Search in the transitions matrix to get the future state
            % according to the input event.
            stateEventPair = [obj.currentState.number, eventNumber];

            [row, ~] = ismember(obj.transitions(:, 1:2), stateEventPair, 'rows');

            selectedLine = obj.transitions(row, :);

            % Then, substitute the number of the current state and change 
            % the related index in the statesArray.
            if ~isempty(selectedLine)
                obj.stateNumber = selectedLine(3);
            end

        end

        function currentState = get.currentState(obj)
            currentState =  obj.statesArray{obj.stateIndex};
        end

        function obj = set.stateNumber(obj, stateNumber)
            for i = 1:obj.numberOfStates
                % Check if there is the state number in the states array.
                if isequal(obj.statesArray{i}.number, stateNumber)
                    obj.stateIndex = i;
                    obj.stateNumber = stateNumber;
                    break;
                end
            end            
        end
    end
end