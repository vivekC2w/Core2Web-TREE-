#include<stdio.h>

void main() {

	int num1=3,num2=4,num3=2;
	int ans = 10+(num3<<num1)*3/8;
	//	= 10+(2<<3)*3/8
	//	= 10+16*3/8
	//	= 10+48/8
	//	= 10 + 6
	//	= 16
	printf("Ans : %d\n",ans);

}
/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ cc prog31.c 
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ ./a.out
Ans : 16
 */
