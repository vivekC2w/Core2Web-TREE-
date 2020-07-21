
#include<stdio.h>

void main() {

        for(int i = 1; i <= 4; i++) {

                for(int j = 1; j <= i; j++) {
			
			printf("%d ",j);

               }

                printf("\n");

        }

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Loops/forWhileDOWhileLoop/NestedFor 20july$ cc pattern3.c
vivek@vivek-HIRAY:~/PPA5/C/Loops/forWhileDOWhileLoop/NestedFor 20july$ ./a.out 
1 
1 2 
1 2 3 
1 2 3 4 
*/
