
#include<stdio.h>

void main() {

	int outer = 1;

	while(outer <= 5) {

		int inner = 1;

		while(inner <= outer) {

			if(outer % 2 != 0) {

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
vivek@vivek-HIRAY:~/Core2Web-TREE-/PPA5/C/Loops/forWhileDOWhileLoop/NestedWhile21July$ cc prog3.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/PPA5/C/Loops/forWhileDOWhileLoop/NestedWhile21July$ ./a.out 
* 
= = 
* * * 
= = = = 
* * * * * 
 */
