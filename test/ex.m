% i = 0
a0 = [1, 11, 13, 36];
stack = a0;

disp(stack)

% i = 1;
a1 = [2, 11, 13, 36];

[logicalPart, indexes] = ismember(a1, stack);

newElements = a1(indexes == 0);
old = stack(sort(indexes(indexes ~= 0)));
stack = [old, newElements];

disp(stack)
% i = 2;
a2 = [2, 11, 13, 14, 36];

[logicalPart, indexes] = ismember(a2, stack);

newElements = a2(indexes == 0);

old = stack(sort(indexes(indexes ~= 0)));
stack = [old, newElements];
 
% i = 3
a3 = [2, 14];

[logicalPart, indexes] = ismember(a3, stack);

newElements = a3(indexes == 0);

old = stack(sort(indexes(indexes ~= 0)));
stack = [old, newElements];