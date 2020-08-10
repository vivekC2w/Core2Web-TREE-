#include<stdio.h>

void main() {

        int cnt = 1;
        do {

                printf("%d",cnt);
		cnt+=1;

	}while(cnt>=10);

         printf("\nAfter loop cnt=%d",cnt);
	 printf("\n");
        
}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/10Aug$ cc cs2.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/10Aug$ ./a.out 
1
After loop cnt=2
 */

