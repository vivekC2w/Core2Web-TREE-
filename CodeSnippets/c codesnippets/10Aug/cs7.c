

#include<stdio.h>

int main() {

	int n = 0, a = 5, b = 10;
	while(n<=(a^b)) {
		n++;
	}
	printf("%d",n);
	return 0;

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/10Aug$ cc cs7.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/10Aug$ ./a.out 
16
*/
