
#include<stdio.h>

void main() {

	int rows,cols;
	printf("Enter Number of Rows and Columns :");
	scanf("%d %d",&rows, &cols);
        for(int i = rows; i >= 1; i--) {

                for(int j = cols; j >= 6-i; j--) {

                        printf("%d ",i*i);

               }

                printf("\n");

        }

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Loops/forWhileDOWhileLoop/NestedFor 20july$ cc pattern6.c
vivek@vivek-HIRAY:~/PPA5/C/Loops/forWhileDOWhileLoop/NestedFor 20july$ ./a.out 
Enter Number of Rows and Columns :5
5
25 25 25 25 25 
16 16 16 16 
9 9 9 
4 4 
1 
 */
