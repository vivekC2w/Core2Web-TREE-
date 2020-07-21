#include<stdio.h>

void main() {

	int a = 5, b = 3;

	switch(a) {

		case 1:
			printf("One\n");

		case 5:
			printf("Two\n");

		case b:				//variable b does not reduce to integer constant
			printf("Three\n");

		case 'a':
			printf("Four\n");

		default:
			printf("Default\n");

	}

}
/*
vivek@vivek-HIRAY:~/Desktop/SwitchAssignment$ cc switchAssign6.c
switchAssign6.c: In function ‘main’:
switchAssign6.c:15:3: error: case label does not reduce to an integer constant
   15 |   case b:
      |   ^~~~
 */
