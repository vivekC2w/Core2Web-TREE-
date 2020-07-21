

#include<stdio.h>

void main() {

	for(int i=1; i<=20; i++) {

		if(i%5==0) {

			printf("%d is Divisible by 5\n",i);

		}else {

			printf("%d is not divisible by 5\n",i);

		}

	}

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Loops/forLoop/9July(PPA)$ cc forDemo4.c
vivek@vivek-HIRAY:~/PPA5/C/Loops/forLoop/9July(PPA)$ ./a.out 
1 is not divisible by 5
2 is not divisible by 5
3 is not divisible by 5
4 is not divisible by 5
5 is Divisible by 5
6 is not divisible by 5
7 is not divisible by 5
8 is not divisible by 5
9 is not divisible by 5
10 is Divisible by 5
11 is not divisible by 5
12 is not divisible by 5
13 is not divisible by 5
14 is not divisible by 5
15 is Divisible by 5
16 is not divisible by 5
17 is not divisible by 5
18 is not divisible by 5
19 is not divisible by 5
20 is Divisible by 5
 */
