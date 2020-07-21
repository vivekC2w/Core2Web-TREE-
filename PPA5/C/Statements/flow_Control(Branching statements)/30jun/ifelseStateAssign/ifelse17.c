
#include<stdio.h>

void main() {

	int num1, num2, num3;

	printf("Input : \n");
	printf("Number One: ");
	scanf("%d",&num1);
	printf("Number Two: ");
	scanf("%d",&num2);
	printf("Number Three: ");
	scanf("%d",&num3);

	if((num1>=num2 && num1>=num3) && (num1%2!=0)) {

		printf("The largest Number amongst %d %d & %d is %d & %dis an odd number\n",num1, num2, num3, num1, num1);

	}else if((num2>=num1 && num2>=num3) && (num2%2!=0)) {

		printf("The largest Number amongst %d %d & %d is %d & %d is an odd number\n",num1, num2, num3, num2, num2);

	}else if((num2>=num1 && num2>=num3) && (num2%2!=0)) {

		printf("The largest Number amongst %d %d & %d is %d & %d is an odd number\n",num1, num2, num3, num3, num3);
	
	}else {

		printf("Invalid Number\n");

	}

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun/ifelseStateAssign$ cc ifelse17.c
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun/ifelseStateAssign$ ./a.out 
Input : 
Number One: 20  
Number Two: 21
Number Three: 12
The largest Number amongst 20 21 & 12 is 21 & 21 is an odd number */


