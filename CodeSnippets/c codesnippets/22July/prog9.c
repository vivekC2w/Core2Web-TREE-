#include<stdio.h>

void main() {

	int a=3,b=2;
	a=a==b==0;
	switch(1){
		a=a+10;
	}
	sizeof(a++);
	printf("%d",a);
}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/22July$ cc prog9.c 
prog9.c: In function ‘main’:
prog9.c:8:4: warning: statement will never be executed [-Wswitch-unreachable]
    8 |   a=a+10;
      |   ~^~~~~
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/22July$ ./a.out 
1 */
