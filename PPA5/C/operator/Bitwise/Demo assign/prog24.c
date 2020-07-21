#include<stdio.h>
void main() {
	
	int num1=8,num2=10,num3=12,num4=8;
	int ans = num1*num3+(num4/4)/num1-(++num2);
	//      = 96 + 2/8 -11
	printf("Ans : %d\n",ans);

}
/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ cc prog24.c 
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ ./a.out
Ans : 85
 */
