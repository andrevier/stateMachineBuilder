% Finite State Machine
% Each state is defined by the number of state and a table with one column
% for events and other indicating if it is active (1) or not (0).
classdef StateMachine
    properties(SetAccess=private)
        currentState
        eventsTable
        defaultEventsTable
        switchedOffEvents
        transitions
        inputEvents
        numberOfStates
    end

    methods
        function obj = StateMachine(eventsTable, switchedOffEvents, transitions)
            event = int32(eventsTable.event);
            isActive = int32(eventsTable.isActive);

            obj.eventsTable = table(event, isActive);
            obj.defaultEventsTable = obj.eventsTable;

            obj.switchedOffEvents = switchedOffEvents;

            obj.transitions = int32(transitions);

            % Get number of possible states
            obj.numberOfStates = size(obj.switchedOffEvents, 1);

            % Set the initial state is zero.
            obj = obj.setState(0);
        end

        function obj = setEventsTable(obj, eventsTable)
            obj.eventsTable = eventsTable;
        end

        function eventsTable = getEventsTable(obj)
            eventsTable = obj.eventsTable;
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
            obj.transitions = int32(transitions);
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
            obj.eventsTable = obj.defaultEventsTable;

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
            % (int32) because the will be inactive in this state and the 
            % unmatched ones are 1 and remain active in this state.
            matchedEvents = ismember(obj.eventsTable.event, inactiveEventsinState);
            obj.eventsTable.isActive = int32(~matchedEvents);
            
        end


    end
end