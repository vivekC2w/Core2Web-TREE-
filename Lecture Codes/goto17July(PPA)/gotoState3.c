
#include<stdio.h>

void main() {

	int x = 10;

	for(int i=1; i<=x; i++) {

		goto fordemo;

	}

	fordemo :
		printf("printing........\n");

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Loops/forWhileDOWhileLoop/goto17July(PPA)$ cc gotoState3.c 
vivek@vivek-HIRAY:~/PPA5/C/Loops/forWhileDOWhileLoop/goto17July(PPA)$ ./a.out 
printing........
 */
