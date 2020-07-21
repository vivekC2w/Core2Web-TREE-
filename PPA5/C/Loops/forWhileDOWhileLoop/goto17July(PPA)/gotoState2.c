
#include<stdio.h>

void main() {

	printf("goto statement\n");

	goto goodmorning;

	printf("After go to statement\n");

	goodmorning:
		printf("Good Morning\n");

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Loops/forWhileDOWhileLoop/goto17July(PPA)$ cc gotoState2.c 
vivek@vivek-HIRAY:~/PPA5/C/Loops/forWhileDOWhileLoop/goto17July(PPA)$ ./a.out 
goto statement
Good Morning
 */
