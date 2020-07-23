

#include<stdio.h>

void main() {

	//for rows
	for(int rows=1; rows<=4; rows++) {

		//for spaces
		for(int space=3; space>=rows; space--) {

			printf("  ");

		}
		//for columns  or *
		for(int col=1; col<=rows; col++) {

			printf("* ");

		}
		printf("\n");

	}

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Lecture Codes/23JulyPatterns$ cc spacePatterns1.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Lecture Codes/23JulyPatterns$ ./a.out 
      * 
    * * 
  * * * 
* * * * 
 */
