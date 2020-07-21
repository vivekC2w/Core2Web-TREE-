
#include<stdio.h>

void main() {

	int sum = 0;			//initialisation

	for(int i=1; i<=10; i++) {	//condition     //inc-dec

		sum = sum + i;		//statement

	}
	printf("sum = %d\n",sum);	//output

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Loops/forWhileDOWhileLoop/15July(PPA)$ cc prog1.c
vivek@vivek-HIRAY:~/PPA5/C/Loops/forWhileDOWhileLoop/15July(PPA)$ ./a.out 
sum = 55
 */
