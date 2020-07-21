#include<stdio.h>

void main() {

        int a = 4, b = 7, ans = 0;
        ans = a | b;
	//    0100
	//  | 0111
	//  = 0111 = 7
        printf("%d\n",ans); // 7

}
/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/11jun/practicecodes$ cc prog6.c 
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/11jun/practicecodes$ ./a.out 
7
 */
