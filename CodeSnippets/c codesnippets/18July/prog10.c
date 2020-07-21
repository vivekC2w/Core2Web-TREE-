
#include<stdio.h>

void main() {

	int a = 1;

        switch(a,a+1) {

                case 1 :
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
vivek@vivek-HIRAY:~/Desktop/CodeSnippets/c codesnippets/18July$ cc prog10.c 
vivek@vivek-HIRAY:~/Desktop/CodeSnippets/c codesnippets/18July$ ./a.out 
Java */
