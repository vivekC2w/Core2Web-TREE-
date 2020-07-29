
#include<stdio.h>

void main() {

        int num = 1;

        for(int rows = 1; rows <= 5; rows++) {

                for(int space = 1; space < rows; space++) {

                        printf("\t");

                }

                for(int cols = 5; cols >= rows; cols--) {

                        if(rows%2!=0) {
				printf("%d\t",num*num);
                        	num++;
			}else {
				printf("%d\t",num*num*num);
                        	num++;
			}

                }
                printf("\n");

        }

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_29July$ cc prog4.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_29July$ ./a.out 
1	4	9	16	25	
	216	343	512	729	
		100	121	144	
			2197	2744	
				225	
			     	*/
