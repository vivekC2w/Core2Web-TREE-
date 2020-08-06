

#include<stdio.h>

void main() {

        int i = 10;

        while(i >= 20) {

                printf("i is greater\n");
		i++;

        }

	do {

		printf("In do while body\n");
		i++;

	}while(i >= 20);

        printf("Out of While\n");

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Lecture Codes/5July_doWhile$ cc prog2.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Lecture Codes/5July_doWhile$ ./a.out 
In do while body
Out of While
 */
