#include<stdio.h>

void main() {

        extern int a;
	printf("%d",a);

}
/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/25jun$ cc DeclarationDemo1.c 
/usr/bin/ld: /tmp/ccFh88BY.o: in function `main':
DeclarationDemo1.c:(.text+0xa): undefined reference to `a'
collect2: error: ld returned 1 exit status
*/
