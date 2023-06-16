% Defines the state according to the input events.
% The state is defined by the number of state and a table of events actives
% or inactive.
classdef StateMachine
    properties(SetAccess=private)
        currentState
        eventsTable
        defaultEventsTable
        switchedOffEventsInState
        transitions
        inputEvents
        numberOfStates
    end
    methods
       function obj = StateMachine(eventsTable, switchedOffEvents, transitions)
           obj.eventsTable = eventsTable;
           obj.defaultEventsTable = eventsTable;
           obj.switchedOffEventsInState = switchedOffEvents;
           obj.transitions = transitions;
           
           % Get number of possible states
           obj.numberOfStates = size(obj.switchedOffEventsInState, 1);
           
           % Set the initial state is zero.            
           obj = obj.setNewState(0);
       end

       function eventsTable = getEventsTable(obj)
           eventsTable = obj.eventsTable;
       end

       function currentState = getCurrentState(obj)
           currentState = obj.currentState;
       end
       
       function obj = setNewEvent(obj, eventNumber)
           % Search in the transitions matrix to get the future state
           % according to the input event.

           % Search in the transitions matrix for the par current state and
           % event number.
           futureState = obj.currentState;
           
           for row = 1:size(obj.transitions, 1)
               if (obj.transitions(row,1) == obj.currentState) & ...
                  (obj.transitions(row,2) == eventNumber)
                  futureState = obj.transitions(row,3);
                   
               end
           end
           obj.currentState = futureState;
           obj.setNewState(futureState);
       end
       
       function obj = setNewState(obj, stateNumber)
           % Update the current state and the events according to the
           % states.
           obj.currentState = stateNumber;

           % Reset the events table.
           obj.eventsTable = obj.defaultEventsTable;

           % Get all the events that are switched off in the state.
           switchedOffEvents = [];
           for i = 1:obj.numberOfStates
               
               if obj.switchedOffEventsInState{i, 1}(1) == stateNumber
                   switchedOffEvents = obj.switchedOffEventsInState{i, 1}(2:end,1);

                   break;
               end
           end

           % Loop the events table to update the events.
            a = 1;
           for i = 1:height(obj.eventsTable) 
               eventOfTable = obj.eventsTable.event(i);
               eventToSwitchOff = switchedOffEvents(a,1);
               if eventOfTable == eventToSwitchOff
                   obj.eventsTable.isActive(i) = 0;
                   len = size(switchedOffEvents,1);
                   if a < len
                       a = a + 1;
                   else
                       break;
                   end
               end

           end
       end
     
       
     end
end