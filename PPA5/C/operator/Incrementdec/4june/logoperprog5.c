#include<stdio.h>

void main() {

        int x = 0, y = 6, ans = 0;

        ans = x++ || y++;
        //  = x || y
        //  = 0 || 6
        //  = 1
        printf("%d %d %d\n",x,y,ans);

}
/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Incrementdec/4june$ cc logoperprog5.c
vivek@vivek-HIRAY:~/PPA5/C/operator/Incrementdec/4june$ ./a.out 
1 7 1
 */
