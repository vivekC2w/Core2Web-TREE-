#include<stdio.h>

void main() {

        int x = 1, y = 0, ans = 0;

        ans = x || y;
        //  = 1 && 0
        //  = 1
        printf("%d\n",ans);

}
/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Incrementdec/4june$ cc logoperprog1.c
vivek@vivek-HIRAY:~/PPA5/C/operator/Incrementdec/4june$ ./a.out 
1
 */