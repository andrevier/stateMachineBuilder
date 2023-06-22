% Finite State Machine
% Each state is defined by the number of state and a table with one column
% for events and other indicating if it is active (1) or not (0).
classdef StateMachine
    properties(SetAccess=private)
        currentState
        allEventsArray
        activeEvents
        defaulActiveEvents
        switchedOffEvents
        transitions
        numberOfStates
    end

    methods
        function obj = StateMachine( ...
                eventsArray, switchedOffEvents, transitionsArray)
            
            obj.allEventsArray = eventsArray;
            % obj.eventsTable = table(eventsArray, activeEvents);
            obj.defaulActiveEvents = ones(numel(eventsArray), 1);
            
            obj.activeEvents = ones(numel(eventsArray), 1);
            obj.switchedOffEvents = switchedOffEvents;

            obj.transitions = transitionsArray;

            % Get number of possible states
            obj.numberOfStates = size(obj.switchedOffEvents, 1);

            % Set the initial state is zero.
            obj = obj.setState(0);
        end

        function obj = setEventsArray(obj, eventsArray)
            obj.allEventsArray = eventsArray;
        end

        function eventsArray = getEventsArray(obj)
            eventsArray = obj.allEventsArray;
        end

        function activeEvents = getActiveEvents(obj)
            activeEvents = obj.activeEvents;
        end

        function obj = setSwitchedOffEvents(obj, switchedOffEvents)
            obj.switchedOffEvents = switchedOffEvents;
        end

        function switchedOffEvents = getSwitchedOffEvents(obj)
            switchedOffEvents = obj.switchedOffEvents;
        end

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
            stateEventPair = [obj.currentState, eventNumber];

            [row, ~] = ismember(obj.transitions(:, 1:2), stateEventPair, 'rows');

            futureState = obj.transitions(row, 3);

            % Then, substitute the current state by the future.
            obj.currentState = futureState;

            % Set the events for the state.
            obj = obj.setState(futureState);
        end

        function obj = setState(obj, stateNumber)
            % Update the current state and the events according to the
            % states.
            obj.currentState = stateNumber;

            % Reset the events table.
            obj.activeEvents = obj.defaulActiveEvents;

            % Get all the events that are inactive in the state.
            inactiveEventsinState = [];
            for i = 1:obj.numberOfStates

                if obj.switchedOffEvents{i, 1}(1) == stateNumber
                    inactiveEventsinState = obj.switchedOffEvents{i, 1}(2:end,1);
                    break;
                end
            end

            % Compare the full events array with the inactive events for
            % the state. Then, the matched events are substituted by 0
            % because they are inactive in this state and the 
            % unmatched ones are 1 and remain active in this state.
            matchedEvents = ismember(obj.allEventsArray, inactiveEventsinState);
            obj.activeEvents = ~matchedEvents;            
        end
    end
end