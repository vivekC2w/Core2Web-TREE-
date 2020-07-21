

#include<stdio.h>

void main() {

	int a = 20;
	int b = 30;

	switch(a) {

		case 20:
			printf("Twenty\n");
		
		case 30:
			printf("30\n");
			break;

	}
	printf("Outside First Switch\n");
	switch(b) {

		case 30:
			printf("30\n");
	
		case 20:
			printf("Twenty\n");
			break;

	}
	printf("Outside Second Switch\n");

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/1jun$ cc switchStatement9.c
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/1jun$ ./a.out 
Twenty
30
Outside First Switch
30
Twenty
Outside Second Switch
 */
