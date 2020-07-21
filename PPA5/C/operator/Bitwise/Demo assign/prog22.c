#include<stdio.h>

void main() {

	int num1=10,num2=12,num3=0;
	int ans = (num2-num1)+3*++num3;
	printf("Ans : %d\n",ans);

}
/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ cc prog22.c 
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ ./a.out
Ans : 5
 */
