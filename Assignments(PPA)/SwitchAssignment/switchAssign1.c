

#include<stdio.h>

void main() {

	int a = 20;

	switch(~a) {				//~a = ~20 = -21

		case 20:
			printf("Case 20\n");
			printf("a=%d\n",a);
			break;

		case -20:
			printf("Case -20\n");
			printf("a=%d\n",a);
			break;

		case -21:
			printf("Case -21\n");	//case -21
			printf("a=%d\n",a);	//a=20
			break;

		default:
			printf("Default\n");
			break;

	}

}
/*
vivek@vivek-HIRAY:~/Desktop/SwitchAssignment$ cc switchAssign1.c 
vivek@vivek-HIRAY:~/Desktop/SwitchAssignment$ ./a.out 
Case -21
a=20
 */

