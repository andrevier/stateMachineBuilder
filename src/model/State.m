classdef State 
    properties
        number double
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