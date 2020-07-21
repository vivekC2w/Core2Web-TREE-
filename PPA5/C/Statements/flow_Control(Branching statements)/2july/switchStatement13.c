#include<stdio.h>

void main() {

        int a = 65;
        switch(a) {

                case 'A':

                        printf("A-case\n");
 //                       break;

                case 'B':

                        printf("B-case\n");
   //                     break;

                case '65':

                        printf("65-case\n");
                        break;

        }
        printf("Out_Of_Switch\n");

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/2july$ cc switchStatement13.c
switchStatement13.c: In function ‘main’:
switchStatement13.c:18:22: warning: multi-character character constant [-Wmultichar]
   18 |                 case '65':
      |                      ^~~~
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/2july$ ./a.out 
A-case
B-case
65-case
Out_Of_Switch
 */
