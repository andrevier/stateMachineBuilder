% Finite State Machine
% Each state is defined by the number of state and a table with one column
% for events and other indicating if it is active (1) or not (0).
classdef StateMachine
    properties
        statesArray cell
        transitions int32
        numberOfStates int32
        eventsArray int32
        stateNumber int32
        stateIndex int32
    end

    properties(Dependent)
        currentState State
        currentActiveEvents logical
        inputEvent int32
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

            futureStateNumber = obj.transitions(row, 3);
            if ~isempty(futureStateNumber)
                % Then, substitute the current state by the future.
                obj.stateNumber = futureStateNumber(1);
            end
        end

        function currentState = get.currentState(obj)
            for i = 1:obj.numberOfStates
                if isequal(obj.statesArray{i}.number, obj.stateNumber)
                    obj.stateNumber = obj.stateNumber;
                    obj.stateIndex = i;
                    break;
                end
            end
            currentState =  obj.statesArray{obj.stateIndex};
        end
    end
end