

#include<stdio.h>

void main() {

	int i = -30, j = 20, k = 1, m;
	m = ++i && ++j && --k;
	printf("%d, %d, %d, %d",i,j,k,m);

	}
/*
vivek@vivek-HIRAY:~/Desktop/CodeSnippets/c codesnippets/8july$ cc cs3.c
vivek@vivek-HIRAY:~/Desktop/CodeSnippets/c codesnippets/8july$ ./a.out 
-29, 21, 0, 0
*/
