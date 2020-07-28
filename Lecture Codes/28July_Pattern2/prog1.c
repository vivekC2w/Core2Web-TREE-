

#include<stdio.h>

void main() {

	for(int row = 1; row <= 4; row++) {

		for(int space = 1; space < row; space++) {

			printf("  ");

		}
		for(int col = 4; col >= row; col--) {

			printf("* ");

		}

		printf("\n");

	}

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Lecture Codes/28July_Pattern2$ cc prog1.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Lecture Codes/28July_Pattern2$ ./a.out 
* * * * 
  * * * 
    * * 
      * 
 */
