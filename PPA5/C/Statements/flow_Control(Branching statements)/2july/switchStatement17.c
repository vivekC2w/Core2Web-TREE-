#include<stdio.h>

void main() {

        char ch = 'b';

        switch(ch) {

                default :

                        printf("Default Case\n");
                       
                case 'A' :

                        printf("A Case\n");
                        break;

                case 'B' :

                        printf("B Case\n");
                        break;

                case 'C' :

                        printf("C Case\n");
                        break;

        }

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/2july$ cc switchStatement17.c
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/2july$ ./a.out 
Default Case
A Case
 */
