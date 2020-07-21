

#include<stdio.h>

void main(void) {

	int num,rem,cnt = 0;

	printf("Input :");
	scanf("%d",&num);

	while(num!=0) {

		rem = num % 10;
		cnt+=1;
		num = num / 10;

	}
	printf("Output:%d\n",cnt);

}
/*
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/16_July(whileAssign)$ cc prog2.c
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/16_July(whileAssign)$ ./a.out 
Input :13345
Output:5
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/16_July(whileAssign)$ ./a.out 
Input :16546453
Output:8
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/16_July(whileAssign)$ ./a.out 
Input :21354
Output:5
 */

