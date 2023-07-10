% Use this scripts to update the main components:

% 1) Update the classes in the src folder.
copyfile model ..\src\model\
copyfile utils ..\src\utils\

% 2) Update the example models.
copyfile StateMachineModel.slx ..\src\
copyfile StateMachineModelFromFiles.slx ..\src\
copyfile StateMachineWithBatchEvents.slx ..\src\
copyfile BatchEventsFor3StateMachines.slx ..\src\
copyfile resources ..\src\resources\

% 3) Update the real time simulation models.
copyfile model ..\test_state_machines\models\batch_events\src\model\
copyfile utils ..\test_state_machines\models\batch_events\src\utils\
copyfile resources ..\test_state_machines\models\batch_events\resources\

copyfile model ..\test_state_machines\models\load_from_files\src\model\
copyfile utils ..\test_state_machines\models\load_from_files\src\utils\
copyfile resources ..\test_state_machines\models\load_from_files\resources\

copyfile model ..\test_state_machines\models\state_machine_by_code\src\model\
copyfile utils ..\test_state_machines\models\state_machine_by_code\src\utils\
copyfile resources ..\test_state_machines\models\state_machine_by_code\resources\
