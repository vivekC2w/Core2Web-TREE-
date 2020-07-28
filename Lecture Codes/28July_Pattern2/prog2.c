
#include<stdio.h>

void main() {

        for(int row = 1; row <= 4; row++) {
		
		char ch = 'A';

                for(int space = 1; space < row; space++) {

                        printf("  ");

                }
                for(int col = 4; col >= row; col--) {

                        printf("%c ",ch);
			ch++;

                }

                printf("\n");

        }

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Lecture Codes/28July_Pattern2$ cc prog2.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Lecture Codes/28July_Pattern2$ ./a.out 
A B C D 
  A B C 
    A B 
      A 
 */
