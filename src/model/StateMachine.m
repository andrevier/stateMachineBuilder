% Finite State Machine
% This class simulates a finite state machine with three main elements:
% statesArray: cell array with State class objects.
% transitions: matrix nx3 with information on transitions between states
% according to events;
% eventsArray: An array with the number of all events that the machine can
% possibly take as input.
classdef StateMachine
    properties
        statesArray cell
        transitions int32
        eventsArray int32
        currentState State
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
            obj.eventsArray = eventsArray;

            % Default state as the first.
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