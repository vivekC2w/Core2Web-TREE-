

#include<stdio.h>

void main() {

	int marks = 65;
	int compMarks = 90;

	if(marks > 70) {

		printf("FC/MODERN?N\n");
		if(compMarks>80){

			printf("FC-BCS\n");

		}else {

			printf("MODERN-BSC\n");

		}

	}else {

		printf("Sportsman-Cricketer\n");

	}

	printf("Out Of if-else\n");

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun$ cc ifelseDemo3.c 
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun$ ./a.out
Sportsman-Cricketer
Out Of if-else
 */
