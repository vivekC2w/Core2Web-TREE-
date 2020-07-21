

#include<stdio.h>

void main() {

	printf("Odd numbers from 20 to 40 :");
	for(int i=20; i<41; i++) {

		if(i%2!=0) {

			printf("%d ",i);

		}

	}
	printf("\n");
}
/*
vivek@vivek-HIRAY:~/Desktop/ForAssignment$ cc prog2.c 
vivek@vivek-HIRAY:~/Desktop/ForAssignment$ ./a.out 
Odd numbers from 20 to 40 :21 23 25 27 29 31 33 35 37 39 
 */
