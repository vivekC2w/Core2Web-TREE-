#include<stdio.h>

void main() {

        int num1 = 1, num2 = 1, ans = 0;
        ans  = (num1==num2) || --num1;
        printf("Ans : %d\nNum1 : %d\nNum2 : %d\n",ans,num1,num2);
}
/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ cc prog8.c 
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ ./a.out 
Ans : 1
Num1 : 1
Num2 : 1
 */
