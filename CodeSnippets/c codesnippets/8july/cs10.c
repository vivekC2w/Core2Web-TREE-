

#include<stdio.h>

void main() {

	int x = 4, y, z;
	y = --x;
	z = x--;
	printf("%d, %d, %d\n",x, y, z);

}
/*
vivek@vivek-HIRAY:~/Desktop/CodeSnippets/c codesnippets/8july$ cc cs10.c
vivek@vivek-HIRAY:~/Desktop/CodeSnippets/c codesnippets/8july$ ./a.out 
2, 3, 3
 */
