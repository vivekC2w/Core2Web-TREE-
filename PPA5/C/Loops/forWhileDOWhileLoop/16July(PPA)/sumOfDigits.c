

#include<stdio.h>

void main() {

	int num, rem, sum = 0;

	printf("Enter Number :");
	scanf("%d",&num);

	int num1 = num;
	while(num>0) {
	
		rem = num % 10;
		sum = sum + rem;
		num = num / 10;

	}

	printf("Sum of Digits from Number %d is %d\n",num1,sum);

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Loops/forWhileDOWhileLoop/16July(PPA)$ cc sumOfDigits.c
vivek@vivek-HIRAY:~/PPA5/C/Loops/forWhileDOWhileLoop/16July(PPA)$ ./a.out 
Enter Number :128
Sum of Digits from Number 128 is 11
vivek@vivek-HIRAY:~/PPA5/C/Loops/forWhileDOWhileLoop/16July(PPA)$ ./a.out 
Enter Number :56428
Sum of Digits from Number 56428 is 25
 */
	
