

#include<stdio.h>

int main() {

	int x = 10, y = 20;
	if(!(!x) && x)
		printf("x = %d\n", x);
	else 
		printf("y = %d\n", y);
	return 0;

}
/*
vivek@vivek-HIRAY:~/Desktop/CodeSnippets/c codesnippets/21July$ cc prog9.c
vivek@vivek-HIRAY:~/Desktop/CodeSnippets/c codesnippets/21July$ ./a.out 
x = 10
 */
