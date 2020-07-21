
#include<stdio.h>

void main() {

        int x = 5, ans = 0;

        ans = x++ + x++;
        //  = temp1   +  temp2
        //  = 5   +  6
        //  = 11

        printf("%d %d\n",x,ans);

}

