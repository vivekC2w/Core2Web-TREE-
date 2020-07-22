
#include<stdio.h>
void main() {

        int const X = 0;

        switch(5/4/3) {

                case X : printf("Clinton\n");
                         break;
                case X+1 : printf("Gandhi\n");
                           break;
                case X+2 : printf("Gates\n");
                           break;
                default : printf("Brown\n");

        }

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/22July$ cc prog6.c 
prog6.c: In function ‘main’:
prog6.c:9:17: error: case label does not reduce to an integer constant
    9 |                 case X : printf("Clinton\n");
      |                 ^~~~
prog6.c:11:17: error: case label does not reduce to an integer constant
   11 |                 case X+1 : printf("Gandhi\n");
      |                 ^~~~
prog6.c:13:17: error: case label does not reduce to an integer constant
   13 |                 case X+2 : printf("Gates\n");
      |                 ^~~~
 */
