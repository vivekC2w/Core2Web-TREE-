

#include<stdio.h>

void main() {

        //for rows
        for(int rows=1; rows<=4; rows++) {

		int a = 1;
                //for spaces
                for(int space=3; space>=rows; space--) {

                        printf("  ");

                }
                //for columns  
                for(int col=1; col<=rows; col++) {

                        printf("%d ",a);
			a++;

                }
                printf("\n");

        }

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Lecture Codes/23JulyPatterns$ cc spacePatterns2.c
vivek@vivek-HIRAY:~/Core2Web-TREE-/Lecture Codes/23JulyPatterns$ ./a.out 
      1 
    1 2 
  1 2 3 
1 2 3 4 
 */
