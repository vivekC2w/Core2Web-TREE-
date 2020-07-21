
#include<stdio.h>

void main() {

	int a = 5, b = 6, ans = 0;

	ans = b++ + b++;

	printf("%d %d\n",b,ans);

}

/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Incrementdec/2june.c$ cc prog4.c
vivek@vivek-HIRAY:~/PPA5/C/operator/Incrementdec/2june.c$ ./a.out
8 13
 */
