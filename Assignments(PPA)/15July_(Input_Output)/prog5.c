

#include<stdio.h>

void main() {

	int num, hrs = 0, min = 0;
	printf("Input:");
	scanf("%d",&num);

	hrs = hrs + num / 60;
	min = num - hrs * 60;

	printf("Output:%d Hours, %d Minutes.\n",hrs,min);

}
/*
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/15July_(Input_Output)$ cc prog5.c
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/15July_(Input_Output)$ ./a.out 
Input:452
Output:7 Hours, 32 Minutes.
 */
