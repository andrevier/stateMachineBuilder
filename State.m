classdef State 
    properties(SetAccess=private)
        number
        name
        activeEvents
    end
    methods
        function obj = State(number, name, activeEvents)
            obj.number = number;
            obj.name = name;
            obj.activeEvents = activeEvents;
        end

        function activeEvents = getActiveEvents(obj)
            activeEvents = obj.activeEvents;
        end

        function name = getName(obj)
            name = obj.name;
        end

        function number = getNumber(obj)
            number = obj.number;
        end
    end
end