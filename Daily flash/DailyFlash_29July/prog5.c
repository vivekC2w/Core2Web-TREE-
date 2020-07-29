

#include<stdio.h>

void main() {

        int num = 0, num1 = 0, fib;
		
        for(int rows = 1; rows <= 5; rows++) {

                for(int space = 1; space < rows; space++) {

                        printf("\t");

                }
                        
                for(int cols = 5; cols >= rows; cols--) {

			if(num==0 && num1==0) {
				printf("%d\t",num1);
				num1++;

			}else if(num==0 && num1==1){

				printf("%d\t",num1);
				fib = num + num1;
				num = num1;
				num1 = fib; 

			}else {
				printf("%d\t",num1);
				fib = num + num1;
				num = num1;
				num1 = fib;

			}	

			

                }
          	printf("\n");

        }

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_29July$ cc prog5.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_29July$ ./a.out 
0	1	1	2	3	
	5	8	13	21	
		34	55	89	
			144	233	
				377	
 */
