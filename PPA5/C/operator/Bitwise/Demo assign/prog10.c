#include<stdio.h>

void main() {

        int num1 = 0, num2 = 1, ans = 0;
        ans  = num1||num2&&num1;
        printf("Ans : %d\nNum1 : %d\nNum2 : %d\n",ans,num1,num2);
}
/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ cc prog10.c 
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ ./a.out 
Ans : 0
Num1 : 0
Num2 : 1
 */
