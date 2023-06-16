% Read file switchedOffEvents.csv
% Returns a cell array nx1 with all events that is switched off in a state. 
% The first element is the state number.
function outputCell = readSwitchedOffEvents(path)
    fid = fopen(path);
    line = fgetl(fid);
    i = 1;
    outputCell = cell(5,1);
    while ischar(line)
        m = textscan(line, '%d', 'Delimiter', ',');
        outputCell{i,1} = m{1};
        i = i + 1;
        line = fgetl(fid);
    end
    
    fclose(fid);
end