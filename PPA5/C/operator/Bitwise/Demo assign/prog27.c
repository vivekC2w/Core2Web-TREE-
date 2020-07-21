#include<stdio.h>

void main() {

	int num1=3,num2=8,num3=12,num4=17;
	int ans = (num1*3+(num2*3)*(num3/3)+num4/2);
	//  	= (3*3+(8*3)*(12/3)+17/2)
	//  	= (3*3+24*4+17/2)
	//  	= (9+24*4+17/2)
	//  	= (9+96+17/2)
	//  	= (9+96+8)
	//  	= 113
	printf("Ans : %d\n",ans);

}
/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ cc prog27.c 
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ ./a.out
Ans : 113
 */	
