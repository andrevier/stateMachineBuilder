function transitions = loadTransitions(path) 
    % Load possible transitions of states due to events  from TCT 
    % auto-generated files (.PDS).
    % This auto-generated files contains a sequence of arrays in the format
    % <initial state> event  <final state>
    % Where:
    % <initial state> is the number of the initial state.
    % <final state> is the number of the final state.
    % event is the number of the final event.
    % Then, this method identify the squence in the file of the path and 
    % outputs a matrix of transitions nx3, where n is the number of 
    % transitions identified in the file.

    % Open the file of the path.
    fid = fopen(path);
    lines = textscan(fid, "%s", "Delimiter","\n");

    % Fixed line where all the sequences start.
    beginningOfData = 28;

    numberOfElements = numel(lines{1});
    
    transitions = zeros(numberOfElements - beginningOfData, 3);
    j = 1;
    for i = beginningOfData:numberOfElements
        line = strtrim(lines{1}{i});
        if (line == "")
            break;
        end
        line = split(line);

        transitions(j, 1) = str2double(line{1});
        transitions(j, 2) = str2double(line{2});
        transitions(j, 3) = str2double(line{3});
        
        j = j + 1;
    end
    fclose(fid);

end 