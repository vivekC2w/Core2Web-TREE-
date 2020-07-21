

#include<stdio.h>

void main() {

	int num;

	printf("How many Numbers you want to print???");
	scanf("%d",&num);

	for(int i = 1; i <= num; i++) {

		printf("%d\n",i * i);

	}

}
/*
vivek@vivek-HIRAY:~/Desktop/LogicBulding/17july(For Loop Based)$ cc prog7.c 
vivek@vivek-HIRAY:~/Desktop/LogicBulding/17july(For Loop Based)$ ./a.out 
How many Numbers you want to print???10
1
4
9
16
25
36
49
64
81
100
 */
