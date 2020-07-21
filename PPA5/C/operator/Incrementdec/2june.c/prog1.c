

#include<stdio.h>

void main() {
	
	int a = 5, b = 6, ans = 0;

	ans = ++a + ++a;

	printf("%d %d\n",a,ans);

}

/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Incrementdec/2june.c$ cc prog1.c
vivek@vivek-HIRAY:~/PPA5/C/operator/Incrementdec/2june.c$ ./a.out
7 14
 */
