

#include<stdio.h>

void main() {

	int i = 4, j = -1, k = 0, w, x, y, z;
	w = i || j || k;
	x = i && j && k;
	y = i || j && k;
	z = i && j || k;
	printf("%d, %d, %d, %d\n",w,x,y,z);

}
/*
vivek@vivek-HIRAY:~/Desktop/CodeSnippets/c codesnippets/8july$ cc cs8.c 
vivek@vivek-HIRAY:~/Desktop/CodeSnippets/c codesnippets/8july$ ./a.out 
1, 0, 1, 1
 */
