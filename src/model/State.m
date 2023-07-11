% State class 
% Represents all information of states in a finite state machine.
classdef State 
    properties
        number int32
        name char
        activeEvents logical
    end
    methods
        function obj = State(number, name, activeEvents)
            obj.number = number;
            obj.name = char(name);
            obj.activeEvents = activeEvents;
        end        
    end
end