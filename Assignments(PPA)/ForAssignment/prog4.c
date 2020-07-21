

#include<stdio.h>

void main() {

	printf("Divisors of 50 :");
	for(int i=1; i<51; i++) {

		if(50%i==0) {

			printf("%d ",i);

		}

	}
	printf("\n");
}
/*
vivek@vivek-HIRAY:~/Desktop/ForAssignment$ cc prog4.c
vivek@vivek-HIRAY:~/Desktop/ForAssignment$ ./a.out 
Divisors of 50 :1 2 5 10 25 50 
 */
