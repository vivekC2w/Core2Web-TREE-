


#include<stdio.h>

void main() {

        int x = 0;

        while(++x--==0) {

                printf("%d ",x);

        }

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/5Aug$ vim prog10.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/5Aug$ cc prog10.c 
prog10.c: In function ‘main’:
prog10.c:10:15: error: lvalue required as increment operand
   10 |         while(++x--==0) {
      |               ^~
 */
