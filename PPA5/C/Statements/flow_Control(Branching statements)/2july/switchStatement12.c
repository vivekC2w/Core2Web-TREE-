

#include<stdio.h>

void main() {

        int a = 65;
        switch(a) {

                case 'A':

                        printf("A-case\n");
                        break;

                case 'B':

                        printf("B-case\n");
                        break;

                case 65:

                        printf("65-case\n");
                        break;

        }
        printf("Out_Of_Switch\n");

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/2july$ cc switchStatement12.c
switchStatement12.c: In function ‘main’:
switchStatement12.c:20:17: error: duplicate case value
   20 |                 case 65:
      |                 ^~~~
switchStatement12.c:10:17: note: previously used here
   10 |                 case 'A':
      |                 ^~~~
*/
