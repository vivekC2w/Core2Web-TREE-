
#include<stdio.h>
#include<stdbool.h>
int main() {

	bool val = false, var = true;

	if(val); {				//if(false); Null Statement
						
		printf("true\n");		//true

	}

	if(var) {				//if(true)    

		printf("false\n");	//false

	}

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun/ifelseStateAssign$ cc ifelse4.c
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun/ifelseStateAssign$ ./a.out 
true
false
 */
