#include<stdio.h>

void main() {

	int num1=1,num2=5,num3=9,num4=14;
	int ans = (0*((num2*3)*(num3/3)+num4/2));
	// 	= (0*((15)*(3)+7))
	// 	= (0*(45+7))
	// 	= 0*52
	// 	= 0
	printf("Ans : %d\n",ans); 

}
/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ cc prog26.c 
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ ./a.out
Ans : 0
 */
