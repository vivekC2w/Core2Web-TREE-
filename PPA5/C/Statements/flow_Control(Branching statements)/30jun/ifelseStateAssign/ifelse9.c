

#include<stdio.h>

void main() {

	int number = 10;

	if(number!=10 && number>0){				//if(0 && 1)
								//if(0)
		printf("%d is a positive no",number);		

		number = -5;

	}

	if(number<0) {						//if(10<0)
								//if(0)
		printf("%d is a negative no",number);
		number=0;

	}

	if(number==0) {						//if(10==0)
								//if(0)
		printf("Number is zero");
		number=15;

	}

	if(number%4==0);{					//Null Statement

		printf("%d is divisible by 4\n",number);	//10 is divisible by 4

	}

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun/ifelseStateAssign$ cc ifelse9.c
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun/ifelseStateAssign$ ./a.out 
10 is divisible by 4
 */
