#include<stdio.h>

void main() {

	int x = 4.3 % 2;
	printf("value of x is %d",x);

}
/*
vivek@vivek-HIRAY:~/Desktop/CodeSnippets/c codesnippets$ cc cs5.c
cs5.c: In function ‘main’:
cs5.c:5:14: error: invalid operands to binary % (have ‘double’ and ‘int’)
    5 |  int x = 4.3 % 2;
      |              ^
 */
