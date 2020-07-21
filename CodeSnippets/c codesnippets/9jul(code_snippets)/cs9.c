

#include<stdio.h>

void main() {

        int x = 3;
	double y = 3.5;
	int z;
	z = x + y;

        printf("%f\n",z);

}
/*
vivek@vivek-HIRAY:~/Desktop/CodeSnippets/c codesnippets/9jul(code_snippets)$ cc cs9.c
cs9.c: In function ‘main’:
cs9.c:12:18: warning: format ‘%f’ expects argument of type ‘double’, but argument 2 has type ‘int’ [-Wformat=]
   12 |         printf("%f\n",z);
      |                 ~^    ~
      |                  |    |
      |                  |    int
      |                  double
      |                 %d
vivek@vivek-HIRAY:~/Desktop/CodeSnippets/c codesnippets/9jul(code_snippets)$ ./a.out 
0.000000
 */
