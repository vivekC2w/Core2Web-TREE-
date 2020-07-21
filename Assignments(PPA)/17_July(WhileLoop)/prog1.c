

#include<stdio.h>

void main() {

	int num, i = 1, sum = 0;

	printf("Input : Enter a Number:");
	scanf("%d",&num);
	
	while(i<=num) {

		sum = sum + i;
		i++;
	}
	printf("Output: The Sum Of All Natural Numbers between 1 to 10 is %d:\n",sum);

}
/*
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/17_July(WhileLoop)$ cc prog1.c 
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/17_July(WhileLoop)$ ./a.out 
Input : Enter a Number:10
Output: The Sum Of All Natural Numbers between 1 to 10 is 55
*/
