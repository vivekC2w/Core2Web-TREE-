
#include<stdio.h>

void main() {

        for(int rows = 1; rows <= 5; rows++) {

		int fact = 1;

              	for(int space = 1; space < rows; space++) {

                        printf("\t");

                }

                for(int cols = 1; cols <= 6 - rows; cols++) {

			fact*=cols;

                        printf("%d\t",fact);

                }
                
                printf("\n");

        }

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_29July$ cc prog3.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_29July$ ./a.out 
1	2	6	24	120	
	1	2	6	24	
		1	2	6	
			1	2	
				1	
			     	*/
