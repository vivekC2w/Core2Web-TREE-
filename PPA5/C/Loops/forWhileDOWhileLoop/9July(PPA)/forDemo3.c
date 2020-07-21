

#include<stdio.h>

void main() {

	for(int i=1; i<=10; i++) {

		if(i%2==0) {

			printf("Even = %d\n",i);

		}else {

			printf("Odd  = %d\n",i);

		}

	}

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Loops/forLoop/9July(PPA)$ cc forDemo3.c
vivek@vivek-HIRAY:~/PPA5/C/Loops/forLoop/9July(PPA)$ ./a.out 
Odd  = 1
Even = 2
Odd  = 3
Even = 4
Odd  = 5
Even = 6
Odd  = 7
Even = 8
Odd  = 9
Even = 10
 */
