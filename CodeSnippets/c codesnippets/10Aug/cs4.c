

#include <stdio.h>
int main() {

	int i = 1;
	while(i<=10 && 1++)
		printf("Hello");

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/10Aug$ cc cs4.c 
cs4.c: In function ‘main’:
cs4.c:7:18: error: lvalue required as increment operand
    7 |  while(i<=10 && 1++)
      |                  ^~
 */
