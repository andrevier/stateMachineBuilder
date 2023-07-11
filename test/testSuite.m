 % Test every method of the test classes.
clc
clear

test1 = TestStateMachine;

test1.run('testSetState')
test1.run('testLoadDataFromFilesAndSetState')
test1.run('testLoadDataFromTctFilesAndSetState')
test1.run('testDefaultState')
test1.run('testInputsEventsOutsideOfTransitionsArray')