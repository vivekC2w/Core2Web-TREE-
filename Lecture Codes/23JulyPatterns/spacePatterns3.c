

#include<stdio.h>

void main() {

        //for rows
        for(int rows=1; rows<=4; rows++) {

                char ch = 'A';
                //for spaces
                for(int space=3; space>=rows; space--) {

                        printf("  ");
			ch++;

                }
                //for columns  
                for(int col=1; col<=rows; col++) {

                        printf("%c ",ch);
                 	ch++;       

                }
		
                printf("\n");

        }

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Lecture Codes/23JulyPatterns$ cc spacePatterns3.c
vivek@vivek-HIRAY:~/Core2Web-TREE-/Lecture Codes/23JulyPatterns$ ./a.out 
      D 
    C D 
  B C D 
A B C D 
 */
