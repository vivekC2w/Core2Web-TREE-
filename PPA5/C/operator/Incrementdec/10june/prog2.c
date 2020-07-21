#include<stdio.h>

void main() {

        int i=10, j=20, k=30;

        int a = ++i + j++;
        //  a = i + temp1
        //  a = 11    + 20
        //  a = 31
        int b = i++ + ++j;
        //  b = temp2   +   j
        //  b = 11  +   22
        //  b = 33

        printf("%d %d\n",a,b);

}
/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Incrementdec/10june$ cc prog2.c 
vivek@vivek-HIRAY:~/PPA5/C/operator/Incrementdec/10june$ ./a.out
31 33
 */
