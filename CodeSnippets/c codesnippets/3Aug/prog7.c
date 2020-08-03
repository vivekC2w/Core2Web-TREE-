

#include<stdio.h>

void main() {

        int a=0, i=0;
        for(i=0; i<5; i++) {

                a++;
                if(i == 3)
			break;

        }
        printf("%d\n",a);

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/3Aug$ cc prog7.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/3Aug$ ./a.out 
4
 */
