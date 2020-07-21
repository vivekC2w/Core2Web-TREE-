#include<stdio.h>

void main() {

	int num1=6,num2=3,num3=11;
	int ans = num2|num1|num3;
	//	= 3|6|11
	//	= 0011 | 0110 | 11
	//	= 0111 | 1011
	//	= 1111
	printf("Ans : %d\n",ans);

}
/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ cc prog33.c 
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ ./a.out
Ans : 15
 */
