#include<stdio.h>

void main() {

        int x = 10, y = 15, ans = 0;

        ans = x | y;
        //  = 1010
        //  | 1111
        //  = 1111 = 15

        printf("%d\n",ans);//15

}
/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise$ cc prog3.c
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise$ ./a.out
15
 */
