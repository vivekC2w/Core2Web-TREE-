#include<stdio.h>

void main() {

	int num1=17,num2=33,num3=42;
	int ans = num1|num3&num2;
	//	= 17|42&33
	//	= 10001| 00101010 & 00100001
	//	= 00010001 | 00100000
	//	= 00110001
	//	= 49
	printf("Ans : %d\n",ans);

}
/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ cc prog36.c 
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ ./a.out
Ans : 49
 */
