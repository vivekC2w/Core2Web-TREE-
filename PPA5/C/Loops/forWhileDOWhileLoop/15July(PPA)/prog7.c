

#include<stdio.h>

void main() {

	int num = 0;
	int i = 1;

	while(i<=20) {

		printf("Enter Number :");
		scanf("%d",&num);

		if(num%4==0 && num%10==0)
			break;
		else
			printf("Num = %d\n",num);

		i++;
	}
	printf("Out Of While\n");

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Loops/forWhileDOWhileLoop/15July(PPA)$ cc prog7.c
vivek@vivek-HIRAY:~/PPA5/C/Loops/forWhileDOWhileLoop/15July(PPA)$ ./a.out 
Enter Number :2
Num = 2
Enter Number :6
Num = 6
Enter Number :20
Out Of While
 */
