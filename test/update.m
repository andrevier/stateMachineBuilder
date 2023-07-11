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
copyfile model ..\real_time_models\models\batch_events\src\model\
copyfile utils ..\real_time_models\models\batch_events\src\utils\
copyfile resources ..\real_time_models\models\batch_events\resources\

copyfile model ..\real_time_models\models\load_from_files\src\model\
copyfile utils ..\real_time_models\models\load_from_files\src\utils\
copyfile resources ..\real_time_models\models\load_from_files\resources\

copyfile model ..\real_time_models\models\state_machine_by_code\src\model\
copyfile utils ..\real_time_models\models\state_machine_by_code\src\utils\
copyfile resources ..\real_time_models\models\state_machine_by_code\resources\

copyfile model ..\real_time_models\models\batch_events_3_supervisors\src\model\
copyfile utils ..\real_time_models\models\batch_events_3_supervisors\src\utils\
copyfile resources ..\real_time_models\models\batch_events_3_supervisors\resources\
