#include<stdio.h>

void main() {

	int num1=8,num2=35,num3=22;
	int ans = num2&num1*4+(num3>>3)|num2/2;	
	// 	= 35&8*4+(22>>2)|35/2
	// 	= 35&8*4+5|35/2
	// 	= 35&32+5|35/2
	// 	= 35&32+5|17
	// 	= 35&37|17
	// 	= 00100011 & 00100101 | 00010001
	// 	= 00100001 | 00010001
	// 	= 00110001
	// 	= 51 
	printf("Ans : %d\n",ans);

}
/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ cc prog39.c 
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ ./a.out
Ans : 51
*/
