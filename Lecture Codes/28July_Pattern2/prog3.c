
#include<stdio.h>

void main() {
	
	int sq = 1;

        for(int row = 1; row <= 4; row++) {

                for(int space = 1; space < row; space++) {

                        printf("\t");

                }
                for(int col = 4; col >= row; col--) {

                        printf("%d\t",sq * sq);
                        sq++;

                }

                printf("\n");

        }

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Lecture Codes/28July_Pattern2$ cc prog3.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Lecture Codes/28July_Pattern2$ ./a.out 
1	4	9	16	
	25	36	49	
		64	81	
			100	
 */


