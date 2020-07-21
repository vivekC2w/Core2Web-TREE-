#include<stdio.h>

void main() {

	int num1=7,num2=4,num3=12;
	int ans = num3&num1&num2;
	//	= 12&7&4
	//	= 1100 & 0111 & 0100
	//	= 0100 & 0100
	//	= 0100
	//	= 4
	printf("Ans : %d\n",ans);

}
/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ cc prog35.c 
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ ./a.out
Ans : 4
 */
