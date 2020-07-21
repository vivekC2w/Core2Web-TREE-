

#include<stdio.h>

void main() {

	int weight = 50;

	if(weight<50 && weight>30) {					//if(0 && 1)
		printf("You are under weight/n");			//if(0)
	}

	if(weight>=50 && weight<=70) {					//if(1 && 1)
		printf("You are well weight\n");			//You are well weight
	}

	if(weight>70); {						//if(0);  Null Statement
		printf("You are overweight you have to work hard\n");	//You are overweight you have to work hard 
	}

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun/ifelseStateAssign$ cc ifelse7.c
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun/ifelseStateAssign$ ./a.out 
You are well weight
You are overweight you have to work hard
 */
