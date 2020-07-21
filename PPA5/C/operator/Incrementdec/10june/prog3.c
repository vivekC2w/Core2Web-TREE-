#include<stdio.h>

void main() {

        int i=10, j=20, k=30;

        int a = ++i + j++ + k++;
        //  a = i + temp1 + temp2
        //  a = 11    + 20 + 30
        //  a = 61
        int b = i++ + ++j + ++k;
        //  b = temp3 + j + k
        //  b = 11    + 22 + 32
        //  b = 65

        printf("%d %d\n",a,b);

}
/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Incrementdec/10june$ cc prog3.c 
vivek@vivek-HIRAY:~/PPA5/C/operator/Incrementdec/10june$ ./a.out
61 65
 */
