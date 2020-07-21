
#include<stdio.h>

void main() {

	int x = 5, ans = 0;

	ans = ++x + ++x;
	//  = x   +  x
	//  = 7   +  7
	//  = 14
	
      	printf("%d %d\n",x,ans);

}
/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Incrementdec/4june$ cc prog2.c
vivek@vivek-HIRAY:~/PPA5/C/operator/Incrementdec/4june$ ./a.out 
7 14
 */
