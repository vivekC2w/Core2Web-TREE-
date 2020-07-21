#include<stdio.h>

void main() {

        extern int a;
        //printf("%d",a);
	printf("%ld",sizeof(a));

}
/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/25jun$ cc DeclarationDemo2.c 
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/25jun$ ./a.out 
4 */
