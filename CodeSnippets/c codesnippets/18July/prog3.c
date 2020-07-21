
#include<stdio.h>
#define Core2web(a) a

void main() {

        int a = 1;

        switch(a) {

                case Core2web(1):
                        printf("PPA\n");
                        break;

                case Core2web(2):
                        printf("JAva\n");
                        break;

        }

}
/*
vivek@vivek-HIRAY:~/Desktop/CodeSnippets/c codesnippets/18July$ cc prog3.c
vivek@vivek-HIRAY:~/Desktop/CodeSnippets/c codesnippets/18July$ ./a.out 
PPA
 */
