
#include<stdio.h>

void main() {

        int a = 7, b = 8, ans = 0;

        ans = ++a + ++a + ++a;

        printf("%d %d\n",a,ans);

        ans = --b + --b + --b;

        printf("%d %d\n",b,ans);


}
/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Incrementdec/2june.c$ cc prog3.c
vivek@vivek-HIRAY:~/PPA5/C/operator/Incrementdec/2june.c$ ./a.out
10 28
5 17
 */
