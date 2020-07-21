
#include<stdio.h>

void main() {

	int num1, num2;
	printf("Ip -> Enter A Number : ");
	scanf("%d",&num1);
	printf("Enter Limit : ");
	scanf("%d",&num2);
	printf("Op -> ");
	for(int i=num1; i<=num2; i++) {

		if(i%num1==0) {

			printf("%d, ",i);

		}

	}
	printf("\n");

}
/*
ivek@vivek-HIRAY:~/Desktop/ForAssignment$ cc prog7.c
vivek@vivek-HIRAY:~/Desktop/ForAssignment$ ./a.out 
Ip -> Enter A Number : 6
Enter Limit : 60
Op -> 6, 12, 18, 24, 30, 36, 42, 48, 54, 60, 
 */

