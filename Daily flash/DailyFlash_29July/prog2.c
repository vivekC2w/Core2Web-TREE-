

#include<stdio.h>

void main() {
                
	int num = 1;

        for(int rows = 1; rows <= 5; rows++) {

                for(int space = 1; space < rows; space++) {

                        printf("\t");
                        
		}

                for(int cols = 5; cols >= rows; cols--) {

                        printf("%d\t",num);
                        num++;

                }
		num = rows;
		num+=(rows+1);

                printf("\n");

        }

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_29July$ cc prog2.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_29July$ ./a.out 
1	2	3	4	5	
	3	4	5	6	
		5	6	7	
			7	8	
				9	
			     	*/
