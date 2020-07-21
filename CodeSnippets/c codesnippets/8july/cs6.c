

#include<stdio.h>

void main() {

	int i = -3, j = 2, k = 0, m;
	m = ++i || j++ && ++k;
	printf("%d, %d, %d, %d",i,j,k,m);

	}
/*
vivek@vivek-HIRAY:~/Desktop/CodeSnippets/c codesnippets/8july$ cc cs6.c
vivek@vivek-HIRAY:~/Desktop/CodeSnippets/c codesnippets/8july$ ./a.out 
-2, 2, 0, 1 */
