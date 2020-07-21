#include<stdio.h>

void main() {

        int i=10, j=20, k=30;

        int b = --i + i-- + --i;
        //  b = i + temp + i;
        //  b = 8 +  8 + 8;
        //  b = 16 + 8;
        //  b = 24;
        

        printf("%d\n",b);

}
/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Incrementdec/10june$ cc prog5.c 
vivek@vivek-HIRAY:~/PPA5/C/operator/Incrementdec/10june$ ./a.out
24
 */
