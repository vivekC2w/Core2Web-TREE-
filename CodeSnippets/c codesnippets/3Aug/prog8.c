
#include<stdio.h>

void main() {

	int i = 0, j = 0;

	for(i=0;i<5;i++) {

		for(j=0;j<4;j++) {

			if(i>1) {

				break;

			}

		}
		printf("Damn!\n");

	}

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/3Aug$ cc prog8.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/3Aug$ ./a.out 
Damn!
Damn!
Damn!
Damn!
Damn!
 */
