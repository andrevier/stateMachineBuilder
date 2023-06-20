% Utility class to load the data from the resources. Then, generates:
%  * eventsTable: A table with all events for the state machine;
%  * switchedOffEvents: A cell array with all the switched off events in 
%    the state;
%  * transitions: A matrix containing information about all transitions in
%  with the events.
classdef StateMachineUtils

    properties(SetAccess=private)
        allEventsPath
        eventsArray
        eventsTable
        transitions
        switchedOffEvents
    end

    methods
       
        function obj = readAllEvents(obj, allEventsPath)                   % check
            % Read the file containing all possible events and return an 
            % array nx1 of the number of events (int32) in the order of
            % reading.
            obj.allEventsPath = allEventsPath;
            size = StateMachineUtils.getNumberOfLines(obj.allEventsPath);
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

        function obj = createEventsTable(obj)                              % check
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

        function obj = readTransitions(obj, path)
            % Read the file resources/transitions.txt and save the content in the nx3
            % array. The columns represent:
            % current state | input event | final state
            obj.transitions = readmatrix(path);
           
        end

        function transitions = getTransitions(obj)
            transitions = obj.transitions;
        end

        function obj = readSwitchedOffEvents(obj, path)
            % Read the file with all the switched off events in each state 
            % and returns a cell array nx1 with an array in each element. 
            % The first element is the state number and the others, the
            % number of the events. Ex:
            % [<State number>, e1, e2, e3]
            % path: a relative path to a csv file where the state is in the
            % first column and the events are the following columns.
            fid = fopen(path);
            line = fgetl(fid);
            i = 1;
            numberOfState = StateMachineUtils.getNumberOfLines(path);
            obj.switchedOffEvents = cell(numberOfState,1);
            while ischar(line)
                m = textscan(line, '%d', 'Delimiter', ',');
                obj.switchedOffEvents{i,1} = m{1};
                i = i + 1;
                line = fgetl(fid);
            end
            
            fclose(fid);
        end

        function switchedOffEvents = getSwitchedOffEvents(obj)
            switchedOffEvents = obj.switchedOffEvents;
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