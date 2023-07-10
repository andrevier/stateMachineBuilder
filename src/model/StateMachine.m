% Finite State Machine
% Each state is defined by the number of state and a table with one column
% for events and other indicating if it is active (1) or not (0).
classdef StateMachine
    properties
        statesArray cell
        transitions int32
        %numberOfStates double
        eventsArray int32
        currentState State
        %stateNumber double
        %stateIndex double
    end

    properties(Dependent)
        stateNumber int32
        currentActiveEvents logical
        inputEvent int32
    end

    methods
        function obj = StateMachine(statesArray, transitions, eventsArray)
            obj.statesArray = statesArray;
            obj.transitions = transitions;
            %obj.numberOfStates = length(statesArray);
            obj.eventsArray = eventsArray;

            % Default state as the first.
            %obj.stateNumber = statesArray{1}.number;
            %obj.stateIndex = 1;
            obj.currentState = statesArray{1};

        end

        function activeEvents = get.currentActiveEvents(obj)
            activeEvents = obj.currentState.activeEvents;
        end

        function obj = set.inputEvent(obj, eventNumber)
            % Determine the state number and the active events in the
            % state machine according to the new event (eventNumber).
            % Search in the transitions matrix to get the future state
            % according to the input event.
            eventNumber = int32(eventNumber);
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
            currentState =  obj.currentState;
        end

        function obj = set.currentState(obj, inputState)
            obj.currentState = inputState;
        end

        function obj = set.stateNumber(obj, stateNumber)
            % Check if the state number exists.
            numberOfStates = length(obj.statesArray);
            for i = 1:numberOfStates
                if isequal(obj.statesArray{i}.number, int32(stateNumber))
                    obj.currentState = obj.statesArray{i};
                    break;
                end
            end            
        end

        function stateNumber = get.stateNumber(obj)
            stateNumber = obj.currentState.number;
        end
    end
end