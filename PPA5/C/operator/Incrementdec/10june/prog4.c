#include<stdio.h>

void main() {

        int i=10, j=20, k=30;

        int a = ++i + ++i + ++i + ++i;
        //  a = i + i + i + i;
        //  a = 12 + 12 + i + i;
        //  a = 24 + i + i;
	//  a = 24 + 13 + i;
	//  a = 37 + 14;
	//  a = 51
        
        printf("%d\n",a);

}
/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Incrementdec/10june$ cc prog4.c 
vivek@vivek-HIRAY:~/PPA5/C/operator/Incrementdec/10june$ ./a.out
51
 */
