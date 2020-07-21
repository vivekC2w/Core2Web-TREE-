
#include<stdio.h>

void main() {

	int a = 65;
	switch(a) {

		case 'A':

			printf("A-case\n");
			break;

		case 'B':

			printf("B-case\n");
			break;

		case '65':

			printf("65-case\n");
			break;

	}
	printf("Out_Of_Switch\n");

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/2july$ cc switchStatement11.c
switchStatement11.c: In function ‘main’:
switchStatement11.c:19:8: warning: multi-character character constant [-Wmultichar]
   19 |   case '65':
      |        ^~~~
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/2july$ ./a.out 
A-case
Out_Of_Switch
 */
