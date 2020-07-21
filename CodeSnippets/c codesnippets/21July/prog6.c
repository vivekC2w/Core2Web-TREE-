
#include<stdio.h>
int main() {

	int a = 10;
	if(10L == a)
		printf("10L\n");
	else if(10==a)
		printf("10\n");
	else 
		printf("0");
	return 0;

}
/*
vivek@vivek-HIRAY:~/Desktop/CodeSnippets/c codesnippets/21July$ cc prog6.c 
vivek@vivek-HIRAY:~/Desktop/CodeSnippets/c codesnippets/21July$ ./a.out 
10L
 */
