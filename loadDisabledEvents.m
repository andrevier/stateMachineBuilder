function disabledEvents = loadDisabledEvents(path)
    % Load control data from TCT auto-generated files (.PDT).
    % The file .PDT contains control data displayed as a list of supervisor
    % states where disabling occurs, together with the events that must
    % be disabled there. The output is a nx1 cell array with all the data 
    % in the following format for each line:
    % [<state number>; e1; e2; e3; ...]
    %
    % The first number represents the state and the following numbers (e1, 
    % e2, ...), the events.
    fid = fopen(path);
    lines = textscan(fid, "%s", "Delimiter","\n");
    
    % Data of the states always begins at line 13.
    beginingOfdata = 13;
    numberOfElements = numel(lines{1});
    
    disabledEvents = {};
    w = 1;
    for i = beginingOfdata:numberOfElements
        thisLine = strtrim(lines{1}{i});
        splittedLine = split(thisLine, "     ");
        if (splittedLine == "")
            break;
        end
        if (numel(splittedLine) > 1)
            for j = 1:numel(splittedLine)
                subLineElement = splittedLine(j, 1);
                if (subLineElement ~= "")
                    subLineElement = strrep(subLineElement, ":", "");
                    subLineElement = strtrim(subLineElement);
                    subLineElement = split(subLineElement);
                    disabledEvents{w, 1} = str2double(subLineElement);
                    w = w + 1;
                end
            end
        else
            splittedLine = strrep(splittedLine, ":", "");
            splittedLine = split(splittedLine);
            disabledEvents{w, 1} = str2double(splittedLine);
            w = w + 1;
        end
    end
end