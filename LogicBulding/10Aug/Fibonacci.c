
#include <stdio.h>

void main() {

	int prevTerm = 0;
       	int currentTerm = 1;
	int nextTerm;

	for(int i=1; i<=9; i++) {

		printf("%d ",prevTerm);
		nextTerm = prevTerm + currentTerm;
		prevTerm = currentTerm;
		currentTerm = nextTerm;

	}

	printf("\n");

}

/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/LogicBulding/10Aug$ cc Fibonacci.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/LogicBulding/10Aug$ ./a.out 
0 1 1 2 3 5 8 13 21 
 */
