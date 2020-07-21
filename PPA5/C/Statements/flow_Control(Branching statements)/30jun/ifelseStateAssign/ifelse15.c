

#include<stdio.h>

void main() {

	char ch;
	printf("Input :");							//Input: A
	scanf("%c",&ch);

	if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {	//if(A == A)
										//if(1)
		printf("%c is a Vowel\n",ch);					// A is a Vowel.

	}else {

		printf("%c is a consonant.\n",ch);

	}

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun/ifelseStateAssign$ cc ifelse15.c
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun/ifelseStateAssign$ ./a.out 
Input :A
A is a Vowel
 */
