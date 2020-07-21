

#include<stdio.h>

void main() {
	
	int num1, num2;

	printf("Input : ");
	scanf("%d %d",&num1, &num2);

	printf("Output : Average of %d and %d is %d\n",num1, num2, (num1+num2)/2);

}
/*
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/InputOutpu_Assign$ cc Avg.c
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/InputOutpu_Assign$ ./a.out 
Input : 10 20
Output : Average of 10 and 20 is 15
*/
