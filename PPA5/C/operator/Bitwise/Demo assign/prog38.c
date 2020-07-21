#include<stdio.h>

void main() {

	int num1=7,num2=33,num3=24;
	int ans = num3^2>>num3/num1<<5;
	//	= 24^2>>24/7<<5
	//	= 24^2>>3<<5
	//	= 24^0<<5
	//	= 24^1
	//	= 1
	printf("Ans : %d\n",ans);

}
/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ cc prog38.c 
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ ./a.out
Ans : 24
 */
