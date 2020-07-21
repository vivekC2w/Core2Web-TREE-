#include<stdio.h>

void main() {

	int a = 10;
	char ch = 'A';
	float f = 20.5;

	switch(f) {

		case 20.5:
			printf("Float value\n");
			break;

		}
		printf("Outside switch\n");

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/1jun$ cc switchStatement7.c
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/1jun$ ./a.out 
One
Outside switch
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/1jun$ cc switchStatement7.c
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/1jun$ ./a.out 
character value
Outside switch
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/1jun$ cc switchStatement7.c
switchStatement7.c: In function ‘main’:
switchStatement7.c:9:9: error: switch quantity not an integer
    9 |  switch(f) {
      |         ^
switchStatement7.c:11:3: error: case label does not reduce to an integer constant
   11 |   case 20.5:
      |   ^~~~

*/
