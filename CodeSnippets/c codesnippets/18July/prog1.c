
#include<stdio.h>
	
const int a = 1, b = 2;

void main() {

	int x = 1;

	switch(x) {

		case a:
			printf("PPA\n");

		case b:
			printf("JAva\n");
			break;

	}

}
/*
vivek@vivek-HIRAY:~/Desktop/CodeSnippets/c codesnippets/18July$ cc prog1.c 
prog1.c: In function ‘main’:
prog1.c:12:3: error: case label does not reduce to an integer constant
   12 |   case a:
      |   ^~~~
prog1.c:15:3: error: case label does not reduce to an integer constant
   15 |   case b:
      |   ^~~~
 */
