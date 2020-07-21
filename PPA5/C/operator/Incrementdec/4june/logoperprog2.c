#include<stdio.h>

void main() {

        int x = 5, y = 6, ans = 0;

        ans = ++x && y++;
        //  = x && temp
        //  = 6 && 6
	//  = 1
        printf("%d %d %d\n",x,y,ans);

}
/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Incrementdec/4june$ cc logoperprog2.c
vivek@vivek-HIRAY:~/PPA5/C/operator/Incrementdec/4june$ ./a.out 
6 7 1
 */
