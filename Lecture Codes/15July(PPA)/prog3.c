
#include<stdio.h>

void main() {

	int sum = 0;			//initialisation
	int startNum = 0;
	int endNum = 0;
	
	printf("Enter Starting Num and Ending Num:\n");
	scanf("%d %d",&startNum,&endNum);

	for(int i=startNum; i<=endNum; i++) {	//condition     //inc-dec

		sum = sum + i;		//statement

	}
	printf("sum = %d\n",sum);	//output

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Loops/forWhileDOWhileLoop/15July(PPA)$ cc prog3.c
vivek@vivek-HIRAY:~/PPA5/C/Loops/forWhileDOWhileLoop/15July(PPA)$ ./a.out 
sum = 55
 */
