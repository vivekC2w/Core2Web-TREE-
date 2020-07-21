
#include<stdio.h>

int main() {

	int num, sum = 0, mult = 1;

	printf("Input : Enter Number => ");
	scanf("%d",&num);
	int num1 = num;

	for(int i=1; i<=num; i++) {

		if(i%2==0) {

			sum = sum + i;

		}else {

			mult = mult * i;

		}

	}
	printf("Sum of all even numbers between 1 to %d:%d\n",num1,sum);
	printf("Multiplication of all odd numbers between 1 to %d:%d\n",num1,mult);

}
/*
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/16_July(whileAssign)$ cc prog1.c
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/16_July(whileAssign)$ ./a.out 
Input : Enter Number => 10
Sum of all even numbers between 1 to 10:30
Multiplication of all odd numbers between 1 to 10:945
 */
