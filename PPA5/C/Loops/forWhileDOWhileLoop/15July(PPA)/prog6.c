

//break statement
#include<stdio.h>

void main() {

	int num = 0;

	for(int i=1; i<=10; i++) {

		printf("Enter Even Numbers :\n");
		scanf("%d",&num);

		if(num%2==0)
			printf("Num = %d\n",num);
		else
			break;

	}

	printf("Out Of for\n");

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Loops/forWhileDOWhileLoop/15July(PPA)$ cc prog6.c
vivek@vivek-HIRAY:~/PPA5/C/Loops/forWhileDOWhileLoop/15July(PPA)$ ./a.out 
Enter Even Numbers :
4
Num = 4
Enter Even Numbers :
6
Num = 6
Enter Even Numbers :
7
Out Of for
 */
