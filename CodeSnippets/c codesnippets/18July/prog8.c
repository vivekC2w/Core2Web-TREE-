
#include<stdio.h>

void main() {

        int a = 2;

        switch(a) {

                case a :
                        printf("PPA");
                        break;

                case 2 :
                        printf("Java");
                        break;

                default :
                        printf("Core2web");
                        break;

        }

}
/*
vivek@vivek-HIRAY:~/Desktop/CodeSnippets/c codesnippets/18July$ cc prog8.c 
prog8.c: In function ‘main’:
prog8.c:10:17: error: case label does not reduce to an integer constant
   10 |                 case a :
      |                 ^~~~
 */
