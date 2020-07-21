
#include<stdio.h>

void main() {

	int sum = 0;			//initialisation
	int i = 1;

	while(i<=100) {			//condition     
		
		if(i%5==0)
			sum = sum + i;		//statement
		i++;			//inc-dec

	}
	printf("sum = %d\n",sum);	//output

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Loops/forWhileDOWhileLoop/15July(PPA)$ cc prog4.c
vivek@vivek-HIRAY:~/PPA5/C/Loops/forWhileDOWhileLoop/15July(PPA)$ ./a.out 
sum = 1050
 */
