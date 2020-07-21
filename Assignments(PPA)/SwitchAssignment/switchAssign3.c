

#include<stdio.h>

int main() {

	float a = 5.2;

	switch(int(a)) {			//In c, syntax of parsing      
						//switch((int)a)
		case 1:
			printf("one\n");
			break;

		case 5:
			printf("Five\n");
			break;

		case 2:
			printf("two\n");
			break;

		default :
			printf("Default\n");
			break;

	}

}
/*
vivek@vivek-HIRAY:~/Desktop/SwitchAssignment$ cc switchAssign3.c 
switchAssign3.c: In function ‘main’:
switchAssign3.c:9:9: error: expected expression before ‘int’
    9 |  switch(int(a)) {
      |         ^~~
 */

