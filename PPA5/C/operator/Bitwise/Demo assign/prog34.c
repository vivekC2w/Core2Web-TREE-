#include<stdio.h>

void main() {

	int num1=4,num2=7,num3=2;
	int ans = num1|num3&num2;
	// 	= 4|2&7
	// 	= 4| 0010 & 0111
	// 	= 4| 0010
	// 	= 0100 | 0010
	// 	= 0110
	// 	= 6
	printf("Ans : %d\n",ans);

}
/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ cc prog34.c 
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ ./a.out
Ans : 6
 */
