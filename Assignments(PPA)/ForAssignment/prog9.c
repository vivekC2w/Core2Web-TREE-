
#include<stdio.h>

void main() {

	int num1, num2;
	printf("Ip -> ");
	scanf("%d %d",&num1, &num2);
	for(int i=num2; i>=num1; i-=2) {
		
		printf("%d ",i);
	

	}
	printf("\n");

}
/*
vivek@vivek-HIRAY:~/Desktop/ForAssignment$ cc prog9.c
vivek@vivek-HIRAY:~/Desktop/ForAssignment$ ./a.out 
Ip -> 15 30
Op -> 28 26 24 22 20 18 16   */
