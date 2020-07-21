

#include<stdio.h>

void main() {

	int i = 10, j = 10, k;
	k = ++i + j++;
	printf("%d, %d, %d",i,j,k);

	}
/*
vivek@vivek-HIRAY:~/Desktop/CodeSnippets/c codesnippets/8july$ cc cs1.c
vivek@vivek-HIRAY:~/Desktop/CodeSnippets/c codesnippets/8july$ ./a.out 
11, 11, 21 */
