

#include<stdio.h>

void main() {

	int hrs, min, tot_min;

	printf("Input :\n");
	printf("Enter Hours :");
	scanf("%d",&hrs);
	printf("Enter Minutes :");
	scanf("%d",&min);

	tot_min = min + (hrs*60);

	printf("Output : Total Minutes: %d Minutes\n",tot_min);

}
/*
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/InputOutpu_Assign$ cc TotalMinutes.c
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/InputOutpu_Assign$ ./a.out 
Input :
Enter Hours :2
Enter Minutes :30
Output : Total Minutes: 150 Minutes
*/
