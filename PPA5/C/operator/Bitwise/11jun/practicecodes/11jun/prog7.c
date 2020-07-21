#include<stdio.h>

void main() {

        int a = 4, b = 7, ans = 0;
        ans = a & b;
        //    0100
        //  & 0111
        //  = 0100 = 4
        printf("%d\n",ans); // 4

}
/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/11jun/practicecodes$ cc prog7.c
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/11jun/practicecodes$ ./a.out 
4
 */
