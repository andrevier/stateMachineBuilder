classdef TestPresetEvents < matlab.unittest.TestCase
    methods(Test)
        function testCreateEventsTable(testCase)
            % Test if the table of events is created.
            data = PresetEvents('resources/allevents.txt');
            
            data = data.readAllEvents();
               
            data = data.createEventsTable();
            
            % When 
            eventsTable = data.getEventsTable();
            
            % Assert equal
            exp = load('test/expectedEventsTable.mat');
            testCase.verifyEqual(eventsTable, exp.eventsTable);
        end
    end
end