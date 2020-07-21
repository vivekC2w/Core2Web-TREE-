
#include<stdio.h>

void main() {

	int outer = 1;

	while(outer <= 5) {

		int inner = 1;

		while(inner <= 6 - outer) {

			if(inner == 1 || outer == 1) {

				printf("* ");

			}else {

				printf("= ");

			}
			inner++;
		}
		printf("\n");
		outer++;

	}

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/PPA5/C/Loops/forWhileDOWhileLoop/NestedWhile21July$ cc prog4.c
vivek@vivek-HIRAY:~/Core2Web-TREE-/PPA5/C/Loops/forWhileDOWhileLoop/NestedWhile21July$ ./a.out 
* * * * * 
* = = = 
* = = 
* = 
* 
 */
