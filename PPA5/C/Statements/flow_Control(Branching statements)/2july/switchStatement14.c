#include<stdio.h>

void main() {

	char ch = 'd';
	switch(ch) {
		
		case 'A':
			printf("case-A\n");
			break;

		case 'B':
			printf("case-B\n");
			break;
			
		case 'C':
			printf("case-C\n");
			break;
			
		default:
			printf("Default case\n");
			break;
	}

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/2july$ cc switchStatement14.c
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/2july$ ./a.out 
Default case
 */
