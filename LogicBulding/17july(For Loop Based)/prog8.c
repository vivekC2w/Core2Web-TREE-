

#include<stdio.h>

void main() {

	int num;

	printf("which Number of table you want?\n");
	scanf("%d",&num);

	for(int i=1; i<=10; i++) {

		printf("%d X %d = %d\n",num,i,num*i);

	}

}
/*
vivek@vivek-HIRAY:~/Desktop/LogicBulding/17july(For Loop Based)$ cc prog8.c
vivek@vivek-HIRAY:~/Desktop/LogicBulding/17july(For Loop Based)$ ./a.out 
which Number of table you want?
5
5 X 1 = 5
5 X 2 = 10
5 X 3 = 15
5 X 4 = 20
5 X 5 = 25
5 X 6 = 30
5 X 7 = 35
5 X 8 = 40
5 X 9 = 45
5 X 10 = 50
 */
