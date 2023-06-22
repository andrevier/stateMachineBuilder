% Finite State Machine
% Each state is defined by the number of state and a table with one column
% for events and other indicating if it is active (1) or not (0).
classdef StateMachine
    properties(SetAccess=private)
        currentState
        statesArray 
        transitions
        numberOfStates
        eventsArray
    end

    methods
        function obj = StateMachine(statesArray, transitions, eventsArray)
            obj.statesArray = statesArray;
            obj.transitions = transitions;
            obj.numberOfStates = numel(statesArray);
            obj.eventsArray = eventsArray;

            % Set default state as zero.
            obj = obj.setState(0);

            if isempty(obj.currentState)
                obj.currentState = statesArray(1);
            end

        end

        function eventsArray = getEventsArray(obj)
            eventsArray = obj.eventsArray;
        end

        function activeEvents = getActiveEvents(obj)
            activeEvents = obj.currentState.getActiveEvents();
        end
% 
%         function obj = setSwitchedOffEvents(obj, switchedOffEvents)
%             obj.switchedOffEvents = switchedOffEvents;
%         end
% 
%         function switchedOffEvents = getSwitchedOffEvents(obj)
%             switchedOffEvents = obj.switchedOffEvents;
%         end

        function currentState = getCurrentState(obj)
            currentState = obj.currentState;
        end
        
        function transitions = getTransitions(obj)
            transitions = obj.transitions;
        end

        function obj = setTransitions(obj, transitions)
            obj.transitions = transitions;
        end

        function obj = setEvent(obj, eventNumber)
            % Determine the state number and the active events in the
            % state machine according to the new event (eventNumber).
            % Search in the transitions matrix to get the future state
            % according to the input event.
            stateEventPair = [obj.currentState.getNumber(), eventNumber];

            [row, ~] = ismember(obj.transitions(:, 1:2), stateEventPair, 'rows');

            futureState = obj.transitions(row, 3);
            if ~isempty(futureState)
                % Then, substitute the current state by the future.
                obj.currentState = futureState;

                % Set the events for the state.
                obj = obj.setState(futureState);
            end
        end

        function obj = setState(obj, stateNumber)
            % Look for the state number in the statesArray.
            for i = 1:obj.numberOfStates
                if (obj.statesArray(i).getNumber() == stateNumber)
                    obj.currentState = obj.statesArray(i);
                end
            end
        end
    end
end