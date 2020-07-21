
#include<stdio.h>

void main() {

	int num, sum = 0;

	printf("Input :");
	scanf("%d",&num);

	for(int i=1; i<num; i++) {

		if(num%i==0) {

			sum = sum + i;

		}

	}
	if(num==sum){

		printf("Output : %d is a perfect Number\n",num);

	}

}
/*
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/16_July(whileAssign)$ cc prog4.c
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/16_July(whileAssign)$ ./a.out 
Input :6
Output : 6 is a perfect Number
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/16_July(whileAssign)$ ./a.out 
Input :28
Output : 28 is a perfect Number
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/16_July(whileAssign)$ ./a.out 
Input :496
Output : 496 is a perfect Number
 */
