

#include<stdio.h>

int main() {

        int n = 0, a = 5, b = 10;
        while(n<=(b<<a)) {
                n++;
        }
        printf("%d",n);

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/10Aug$ cc cs8.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/10Aug$ ./a.out 
321
*/
