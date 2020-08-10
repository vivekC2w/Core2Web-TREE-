

#include<stdio.h>

int main() {

        int a = 16, n = 0;
        while(n<=~(~a)) {
                n++;
        }		//n=17
	a=n;		//a=17
        printf("%d",~a);//~17=-18
	return 0;

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/10Aug$ cc cs9.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/10Aug$ ./a.out 
-18
*/
