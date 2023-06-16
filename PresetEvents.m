% Load the data in the file resources/allevents.txt
% Containing all possible events in the 
% Creates the table of events.
classdef PresetEvents

    properties
        allEventsPath
        eventsArray
        eventsTable
    end

    methods
        function obj = PresetEvents(allEventsPath)
            obj.allEventsPath = allEventsPath;
        end

        function obj = readAllEvents(obj)
            % Read allevents.txt
            % Read the file allevents.txt and return an array nx1 of int32.
            % 
            size = PresetEvents.getNumberOfLines(obj.allEventsPath);
            obj.eventsArray = zeros(size,1);
            
            fid = fopen(obj.allEventsPath);
            tline = fgets(fid);
            i = 1;
            while ischar(tline)
                obj.eventsArray(i,1) = str2num(tline);
                i = i + 1;
                tline = fgets(fid);
            end

            fclose(fid);
        end
        
        function eventsArray = getEventsArray(obj)
            eventsArray = obj.eventsArray;
        end

        function obj = createEventsTable(obj)
            % Create an event table with two columns. The first is for the
            % events and the second, to check if these event is active or
            % not.
            event = obj.eventsArray;
            isActive = ones(obj.getNumberOfEvents, 1);
            obj.eventsTable = table(event, isActive);
        end
        
        function eventsTable = getEventsTable(obj)
            eventsTable = obj.eventsTable;
        end

        function numberOfEvents = getNumberOfEvents(obj)
            numberOfEvents = size(obj.eventsArray, 1);
        end
    end

    methods(Static)
        function numberOflines = getNumberOfLines(path)
            fid = fopen(path);
        
            tline = fgetl(fid);
        
            numberOflines = 0;
        
            while ischar(tline)
                tline = fgetl(fid);
                numberOflines = numberOflines + 1;
            end
            fclose(fid);
        end
    end    
end