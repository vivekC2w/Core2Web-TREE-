
#include<stdio.h>

void main() {

	int num;

	printf("Input:");
	scanf("%d",&num);

	printf("Output:");
	int i = num;
	while(num>0) {

		if(num%2==0) {
			
			printf("%d ",num);
			num--;

		}else {

			printf("%d ",num);
			num = num - 2;

		}

	}
		printf("\n");

}
/*
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/17_July(WhileLoop)$ cc prog3.c
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/17_July(WhileLoop)$ ./a.out 
Input:6
Output:6 5 4 3 2 1 
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/17_July(WhileLoop)$ ./a.out 
Input:7
Output:7 5 3 1 
 */
