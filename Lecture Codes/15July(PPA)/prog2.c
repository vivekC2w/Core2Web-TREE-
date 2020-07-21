

#include<stdio.h>

void main() {

	int sum = 0;
	int i = 1;		//initialisation

	while(i<=10) {		//condition

		sum = sum + i;
		i++;		//inc - dec

	}

	printf("sum = %d\n",sum);//output

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Loops/forWhileDOWhileLoop/15July(PPA)$ cc prog2.c
vivek@vivek-HIRAY:~/PPA5/C/Loops/forWhileDOWhileLoop/15July(PPA)$ ./a.out 
sum = 55
 */
