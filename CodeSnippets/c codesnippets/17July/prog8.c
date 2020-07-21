#include<stdio.h>

void main() {

        if(true) {

                printf("Java ");

        }else {

                printf("PPA ");

        }

}
/*
vivek@vivek-HIRAY:~/Desktop/CodeSnippets/c codesnippets/17July$ cc prog8.c
prog8.c: In function ‘main’:
prog8.c:5:12: error: ‘true’ undeclared (first use in this function)
    5 |         if(true) {
      |            ^~~~
prog8.c:5:12: note: each undeclared identifier is reported only once for each function it appears in
 */
