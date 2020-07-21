#include<stdio.h>

void main() {

	//int marks = 90;
	//int marks = 85;
	//int marks = 75;
	int marks = 65;
	if(marks >= 90){
		printf("FC\n");
	}else if(marks>=80 && marks<=90){
		printf("MODERN\n");
	}else if(marks>70 && marks<=80){
		printf("GARWARE\n");
	}else {
		printf("JaiKranti\n");
	}
}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun$ cc ifelseDemo5.c 
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun$ ./a.out
FC
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun$ cc ifelseDemo5.c 
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun$ ./a.out
MODERN
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun$ cc ifelseDemo5.c 
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun$ ./a.out
GARWARE
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun$ cc ifelseDemo5.c 
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun$ ./a.out
JaiKranti
 */
