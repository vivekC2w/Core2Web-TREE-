#include<stdio.h>

void main() {

	int num1=1,num2=2,num3=6;
	int ans = num1*2<<num3+(num2/2)*3;
	// 	= 1*2<<6+(1)*3
	// 	= 2<<6+3
	// 	= 2<<9
	// 	= 2 * 512
	// 	= 1024
	printf("Ans : %d\n",ans);

}
/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ cc prog37.c 
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ ./a.out
Ans : 1024
 */
