#include<stdio.h>

void main() {

        int num1 = 5, num2 = 4, ans = 0;
        ans  = (++num1&&num2) != (--num2||num1--);
        printf("%d\n",ans);
}

/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ cc prog7.c 
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ ./a.out 
0
 */
