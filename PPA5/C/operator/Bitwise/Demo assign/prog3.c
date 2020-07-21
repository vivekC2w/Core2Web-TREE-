#include<stdio.h>

void main() {

        //1.int a = 5, b = 2;     5 * 2^2 = 20
        //2.int a = 21, b = 3;	  21 * 2^3 = 168	
        int a = 46, b = 4;        // 46 * 2^4 =   
        int ans = 0;

        ans = a << b;
        printf("%d\n",ans);

}
/*
1.vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ cc prog3.c 
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ ./a.out 
20
2. vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ cc prog3.c 
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ ./a.out 
168
3.*vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ cc prog3.c 
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ ./a.out 
736
*/
