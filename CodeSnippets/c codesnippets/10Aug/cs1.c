

#include <stdio.h>

void main() {

	int i = 1;
	while(i <= 5) {

		printf("%d",i);
		if(i==5)
			goto print;
		i++;

	}

}
fun() {

	print :
		printf("BiEncaps.com");

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/10Aug$ cc cs1.c 
cs1.c: In function ‘main’:
cs1.c:12:4: error: label ‘print’ used but not defined
   12 |    goto print;
      |    ^~~~
cs1.c: At top level:
cs1.c:18:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
   18 | fun() {
      | ^~~
 */
