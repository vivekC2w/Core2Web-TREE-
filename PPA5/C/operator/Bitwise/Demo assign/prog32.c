#include<stdio.h>

void main() {

	int num1=5,num2=6,num3=2;
	int ans = num2>>num3+num1*3;	 
	//	= 6>>2+5*3;
	//	= 6>>2+15
	//	= 6>>17
	//	= 0
	printf("Ans : %d\n",ans);

}
/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ cc prog32.c 
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ ./a.out
Ans : 0
 */
