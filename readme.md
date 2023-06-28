## Máquina de Estados Finitos no Matlab

Autor: André Rangel

Data: 27/06/23

Esse projeto implementa uma máquina de estados finita e genérica em Matlab para ser usada tanto em linha de comando, scripts ou em modelos para Simulink. Em comparação com projetos como StateFlow, essa implementação apresenta uma interface em código da máquina de estados voltada para atender as necessidades de gerar um grande número de estados e suas conexões, algo que graficamente no Simulink se torna cansativo e propenso a erros. 

A representação da máquina de estados é dada através de 2 entidades: o estado e a máquina de estados. O estado pode ser definido por:
- number: número dado pelo usuário aos estados;
- name: nome do estado;
- activeEvents: vetor com 0s e 1s para definir quais estados estão ativos e inativos na máquina.

A máquina de estados pode ser definida por:
- eventsArray: vetor (nx1) que contém o número total de eventos;
- transitions: matriz (nx3) de transição: contém todas as possíveis transições entre os estados através de eventos.
- numberOfStates: 



