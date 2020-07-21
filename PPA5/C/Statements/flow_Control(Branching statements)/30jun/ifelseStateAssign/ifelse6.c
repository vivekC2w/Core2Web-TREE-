
#include<stdio.h>

int main() {

	int subVal = 15;

	if(subVal++ && subVal--) {		//if(15 && 16)
						
		printf("subVal :%d\n",subVal);	//subVal :15

	}
	if(subVal-- && ++subVal) {		//if(15 && 15)
						
		printf("subVal :%d\n",subVal);	//subVal :15

	}
	if(subVal > subVal); {		//if(15 > 15)
						
		printf("subVal :%d\n",subVal);	//subVal :15

	}




}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun/ifelseStateAssign$ cc ifelse6.c
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun/ifelseStateAssign$ ./a.out 
subVal :15
subVal :15
subVal :15

 */
