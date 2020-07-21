#include<stdio.h>

void main() {

	int num1=2,num2=3;
	int ans = ++num1<<num2;
	// 	= 3<<3
	// 	= 3*2^3
	// 	= 3*8
	// 	= 24
	printf("Ans : %d\n",ans);

}
/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ cc prog28.c 
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ ./a.out
Ans : 24
 */
