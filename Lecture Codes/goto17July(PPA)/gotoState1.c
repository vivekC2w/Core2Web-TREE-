

#include<stdio.h>

void main() {

	int x = 7;
	printf("goto Statement\n");

	goodmorning:
		printf("Good Morning!!!\n");
		printf("Have a nice Day!!!\n");
		x--;

	if(x>5)
		goto goodmorning;

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Loops/forWhileDOWhileLoop/goto17July(PPA)$ cc gotoState1.c
vivek@vivek-HIRAY:~/PPA5/C/Loops/forWhileDOWhileLoop/goto17July(PPA)$ ./a.out 
goto Statement
Good Morning!!!
Have a nice Day!!!
Good Morning!!!
Have a nice Day!!!
 */
