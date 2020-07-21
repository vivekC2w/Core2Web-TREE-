
#include<stdio.h>

void main() {

	int a = 65;
	switch(a) {

		case 'A':
			printf("Character A\n");
			break;
	}
	printf("Outside switch\n");

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/1jun$ cc switchStatement10.c
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/1jun$ ./a.out 
Character A
Outside switch
 */
