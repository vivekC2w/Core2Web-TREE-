#include<stdio.h>

void main(void) {
	int aNum = 0;
	char aChar;
	if(!aNum) {					//if(1)
		printf("Inside First If...\n");		//Inside First If...
		aNum += 20;				//aNum = 20
		aChar = 'T';				//aChar = 'T'
	}
	if(aNum % 4 != 0) {				//if(20%4!=0)   //if(0)
		printf("Inside Second If...\n");
		aNum -= 20;
		aChar = 'F';
	}
	if(aNum == 0) {					//if(20 == 0)  //if(0)
		printf("Inside Third If...\n");
		aChar = 'T';
	}
	printf("After all IF,Values Are....%d & %c\n",aNum, aChar);    //20  T

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun/ifelseStateAssign$ cc ifelse10.c
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun/ifelseStateAssign$ ./a.out 
Inside First If...
After all IF,Values Are....20 & T
 */

