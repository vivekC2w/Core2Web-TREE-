#include<stdio.h>

void main() {

	int a = 5;
	int b = ++a + a++ + --a;
	printf("%d\n",b);

}
/*
vivek@vivek-HIRAY:~/Desktop/CodeSnippets/c codesnippets$ cc cs7.c
vivek@vivek-HIRAY:~/Desktop/CodeSnippets/c codesnippets$ ./a.out 
19
 */
