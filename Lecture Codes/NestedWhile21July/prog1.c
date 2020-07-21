
#include<stdio.h>

void main() {

	char ch  = 'A';

	int outer = 1;				//outer init

	while(outer <= 5) {			//outer condition

		int inner = 1;			//inner init

		while(inner <= 6 - outer) {	//inner condition

			printf("%c ",ch);	//statement
			ch++;			//statement
			inner++;		//inner inc

		}
		printf("\n");
		outer++;			//outer inc

	}

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/PPA5/C/Loops/forWhileDOWhileLoop/NestedWhile21July$ cc prog1.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/PPA5/C/Loops/forWhileDOWhileLoop/NestedWhile21July$ ./a.out 
A B C D E 
F G H I 
J K L 
M N 
O 
 */
