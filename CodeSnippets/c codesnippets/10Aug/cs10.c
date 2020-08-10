

#include<stdio.h>

void main() {

        int i = 0;
        do {
                i++;

		if(i == 3)
			continue;

		printf("In Loop ");

        }while(i<3);

        printf("%d\n",i);

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/10Aug$ cc cs10.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/10Aug$ ./a.out 
In Loop In Loop 3
 */
