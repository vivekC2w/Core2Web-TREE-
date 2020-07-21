

#include<stdio.h>

void main() {

	int i = -3, j = 2, k = 0, m;
	m = ++i && ++j || ++k;
	printf("%d %d %d %d\n",i, j, k, m);

}
/*
vivek@vivek-HIRAY:~/Desktop/CodeSnippets/c codesnippets/8july$ cc cs9.c
vivek@vivek-HIRAY:~/Desktop/CodeSnippets/c codesnippets/8july$ ./a.out 
-2 3 0 1
 */
