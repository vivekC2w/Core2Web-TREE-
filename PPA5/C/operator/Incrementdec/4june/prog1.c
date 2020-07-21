
#include<stdio.h>

void main() {

	int x = 8, ans = 0;

	ans = ++x + x++;

	printf("%d %d\n",x,ans);

}

/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Incrementdec/4june$ cc prog1.c 
vivek@vivek-HIRAY:~/PPA5/C/operator/Incrementdec/4june$ ./a.out
10 19
*/
