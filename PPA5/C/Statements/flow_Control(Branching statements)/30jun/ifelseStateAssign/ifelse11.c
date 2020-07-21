#include<stdio.h>

void main() {

	int number1, number2;
	printf("Enter two Integers: ");
	scanf("%d %d",&number1, &number2);

	if(number1 >= number2) {
		if(number1 == number2) {
			printf("%d=%d\n",number1, number2);
		}
		else {
			printf("%d > %d\n",number1, number2);
		}
	}
	else {
			printf("%d < %d\n",number1, number2);
	}
}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun/ifelseStateAssign$ cc ifelse11.c
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun/ifelseStateAssign$ ./a.out 
Enter two Integers: 10 20
10 < 20 */
