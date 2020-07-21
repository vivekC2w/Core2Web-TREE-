#include<stdio.h>

void main() {

	int num1=4,num2=7,num3=5,num4=10;
	int ans = 15/num3+(num2*2+num1)*num2+num4/10;
	//      = 15/5+(7*2+4)*7+10/10;
	//      = 15/5+18*7+10/10
	//      = 3+18*7+10/10
	//      = 3+126+1
	//      = 130
	printf("Ans : %d\n",ans);

}
/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ cc prog25.c 
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ ./a.out
Ans : 130
 */
