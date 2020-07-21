

#include<stdio.h>

void main() {

	int a = 10, b = 20;

	if((a && b++) && (a++ || ++b)) {        //if((10 && 20) && (10 || 21))
					        //if((1) && (1))
					        //if(1)
		printf("a :%d\n",a);		//a : 11
		printf("b :%d\n",b);		//b : 21

	}
	printf("out of if\n");

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun/ifelseStateAssign$ cc ifelse2.c 
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun/ifelseStateAssign$ ./a.out 
a :11
b :21
out of if
 */
