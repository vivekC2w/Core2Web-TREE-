

#include<stdio.h>

void main() {

	char ch;
	printf("Input :");							//Input: A
	scanf("%c",&ch);

	if(ch >= 'A' && ch <= 'Z') {	//if(A == A)
										//if(1)
		printf("%c is a Upper case character\n",ch);					// A is a Vowel.

	}else if(ch >= 'a' && ch <= 'z'){

		printf("%c is a Lower case character.\n",ch);

	}else {

		printf("%c is a special character.\n",ch);

	}

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun/ifelseStateAssign$ cc ifelse16.c
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun/ifelseStateAssign$ ./a.out 
Input :*
* is a special character.
 */
