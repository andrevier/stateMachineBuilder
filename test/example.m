% Given the following list of states.
s0 = State(0, 's0', [1, 1, 0, 0]);
s1 = State(1, 's1', [1, 0, 0, 0]);
s2 = State(2, 's2', [1, 1, 1, 0]);
eventsArray = [1, 2, 3, 4];
transitions = [0, 1, 0; 0, 2, 1; 1, 3, 2];

stateMachine = StateMachine({s0, s1, s2}, transitions, eventsArray);
s = stateMachine.currentState;
disp(s)

stateMachine.inputEvent = 2;

s = stateMachine.currentState;
disp(s)
