

#include<stdio.h>

void main() {

	int numOfDays;
	printf("Input: Enter No of days to complete the assignment:");
	scanf("%d",&numOfDays);

	printf("Output:");
	while(numOfDays>=0) {

		printf("%d days Remaining\n",numOfDays);
		numOfDays--;

	}

}
/*
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/17_July(WhileLoop)$ cc prog4.c
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/17_July(WhileLoop)$ ./a.out 
Input: Enter No of days to complete the assignment:7
Output:7 days Remaining
6 days Remaining
5 days Remaining
4 days Remaining
3 days Remaining
2 days Remaining
1 days Remaining
0 days Remaining
 */
