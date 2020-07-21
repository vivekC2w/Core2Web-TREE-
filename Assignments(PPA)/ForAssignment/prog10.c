

#include<stdio.h>

void main() {

	int num1;
	printf("Ip -> ");
	scanf("%d",&num1);
	printf("Op -> ");

	for(int i=1; i<=num1; i++) {

		if(num1%i==0) {

			printf("%d ",i);

		}

	}
		printf("\n");

}
/*
vivek@vivek-HIRAY:~/Desktop/ForAssignment$ cc prog10.c
vivek@vivek-HIRAY:~/Desktop/ForAssignment$ ./a.out 
Ip -> 65
Op -> 1 5 13 65 
 */

