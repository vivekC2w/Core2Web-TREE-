

#include<stdio.h>

void main() {

	int a;
	printf("i/p = ");
	scanf("%d",&a);
	printf("O/p = ");

	for(int i=1; i<=10; i++) {

		printf("%d ",a*i);

	}

	printf("\n");

}
/*
vivek@vivek-HIRAY:~/Desktop/ForAssignment$ cc prog1.c 
vivek@vivek-HIRAY:~/Desktop/ForAssignment$ ./a.out 
i/p = 3
O/p = 3 6 9 12 15 18 21 24 27 30 
 */
