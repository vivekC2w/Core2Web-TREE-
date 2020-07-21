

#include<stdio.h>

void main() {

        int rows;
        int columns;

        printf("Enter the Numbers of rows and columns :");
        scanf("%d %d",&rows, &columns);

        for(int i=1; i<=rows; i++) {

                for(int j=1; j<=columns; j++) {

                        printf("%d ",j);

                }

                printf("\n");

        }

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Loops/forWhileDOWhileLoop/NestedFor18July$ cc prog4.c
vivek@vivek-HIRAY:~/PPA5/C/Loops/forWhileDOWhileLoop/NestedFor18July$ ./a.out 
Enter the Numbers of rows and columns :5
5
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
 */
