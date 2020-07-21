#include<stdio.h>

void main() {

	int num1=45,num2=82,num3=109;
	int ans = num2<<num1&4-(num3^3)&num2|2*(-156>>3);	
	//  	= 82<<45&4-(109^3)&82|2*(-156/8)
	//  	= 82<<45&4-1295029&82|2*(-19)
	//  	= 82<<45&4-1295029&82|(-38)
	//  	= 82<<45&−1295025&82|(-38)
	//  	=  
	printf("Ans : %d\n",ans);

}
/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ cc prog40.c 
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ ./a.out
Ans : -40
 */
