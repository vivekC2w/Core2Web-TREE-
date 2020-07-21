

#include<stdio.h>

void main() {

	int x = a, a = 3, b = 6;

	printf("%d\n",x);
	printf("%d\n",a);
	printf("%d\n",b);

}
/*
vivek@vivek-HIRAY:~/Desktop/CodeSnippets/c codesnippets/9jul(code_snippets)$ cc cs8.c
cs8.c: In function ‘main’:
cs8.c:7:10: error: ‘a’ undeclared (first use in this function)
    7 |  int x = a, a = 3, b = 6;
      |          ^
cs8.c:7:10: note: each undeclared identifier is reported only once for each function it appears in
 */
