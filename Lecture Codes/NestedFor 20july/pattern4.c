
#include<stdio.h>

void main() {

        for(int i = 1; i <= 4; i++) {

                for(int j = 1; j <= 5-i; j++) {

                        printf("* ");

               }

                printf("\n");

        }

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Loops/forWhileDOWhileLoop/NestedFor 20july$ cc pattern4.c
vivek@vivek-HIRAY:~/PPA5/C/Loops/forWhileDOWhileLoop/NestedFor 20july$ ./a.out 
* * * * 
* * * 
* * 
* 
 
*/