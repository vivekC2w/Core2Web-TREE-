#include<stdio.h>

void main() {

	int i=10, j=20, k=30;
	
	int a = i++ + j++;
	//  a = temp1 + temp2
	//  a = 10    + 20
	//  a = 30
	int b = ++i + ++j;
	//  b = i   +   j
	//  b = 12  +   22
	//  b = 34

	printf("%d %d\n",a,b);

}
/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Incrementdec/10june$ cc prog1.c 
vivek@vivek-HIRAY:~/PPA5/C/operator/Incrementdec/10june$ ./a.out
30 34
 */
