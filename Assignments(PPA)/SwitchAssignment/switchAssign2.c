

#include<stdio.h>

void main() {

	int x = 10;
	int y = 20;

	switch(x) {

		case x:					// case label must value of that variable not variable
			printf("Case 10\n");
			printf("x = %d\n",x);
			break;

		case y:
			printf("Case 20\n");
			printf("y = %d\n",y);
			break;

		default:
			printf("Default\n");
			break;

	}

}
/*
vivek@vivek-HIRAY:~/Desktop/SwitchAssignment$ cc switchAssign2.c 
switchAssign2.c: In function ‘main’:
switchAssign2.c:12:3: error: case label does not reduce to an integer constant
   12 |   case x:
      |   ^~~~
switchAssign2.c:17:3: error: case label does not reduce to an integer constant
   17 |   case y:
      |   ^~~~
 */

