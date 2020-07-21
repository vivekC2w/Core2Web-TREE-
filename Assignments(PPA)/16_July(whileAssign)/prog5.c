

#include<stdio.h>

void main(void) {

	printf("Output :");
	for(int i=1; i<=50; i++) {

		if(i%2==0 && i%5==0) {

			printf("%d ",i);

		}

	}
	printf("\n");

}
/*
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/16_July(whileAssign)$ cc prog5.c
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/16_July(whileAssign)$ ./a.out 
Output :10 20 30 40 50 */


