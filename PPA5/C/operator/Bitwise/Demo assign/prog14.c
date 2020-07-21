#include<stdio.h>

void main() {

        int num1 = 0, num2 = 0, ans = 0;
        ans  = !(num1||(num1&&!num2))||1;
        printf("Ans : %d\nNum1 : %d\nNum2 : %d\n",ans,num1,num2);
}

