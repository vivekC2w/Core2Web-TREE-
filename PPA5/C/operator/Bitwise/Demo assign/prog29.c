#include<stdio.h>

void main() {

	int num1=3,num2=4;	
	int ans = num1<<num2++;
	// 	= 3<<4
	// 	= 3*2^4
	// 	= 3*16
	// 	= 48
	printf("Ans : %d\n",ans);

}
/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ cc prog29.c 
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ ./a.out
Ans : 48
 */
