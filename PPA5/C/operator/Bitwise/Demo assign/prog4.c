#include<stdio.h>

void main() {

	int a = 5, b = 6;
	int ans = 0;

	ans = a++ + ++a/++b * a++ - b++;
	//ans = a++ + ++a * a++;
	printf("%d\n",ans);

}
/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ cc prog4.c 
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ ./a.out 
5
 */
