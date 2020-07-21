

#include<stdio.h>

void main() {

	printf("Even numbers from 50 to 70 :");
	for(int i=50; i<71; i++) {

		if(i%2==0) {

			printf("%d ",i);

		}

	}
	printf("\n");
}
/*
vivek@vivek-HIRAY:~/Desktop/ForAssignment$ cc prog3.c
vivek@vivek-HIRAY:~/Desktop/ForAssignment$ ./a.out 
Even numbers from 50 to 70 :50 52 54 56 58 60 62 64 66 68 70 
 */
