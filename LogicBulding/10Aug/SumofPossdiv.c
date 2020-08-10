

/*
 Write a program that computes the sum of all possible divisors of an entered numbers.
 */

#include <stdio.h>

void main() {

	int n, sum = 0;

	printf("Enter a Number : ");
	scanf("%d",&n);

	printf("\nPerfect divisors of %d are : ",n);

	for(int i = 1; i <= n; i++) {

		if(n%i==0) {

			printf("%d ",i);
			sum+= i;

		}

	}

	printf("\n");


	printf("Sum of all Perfect divisors of %d are %d\n",n,sum);

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/LogicBulding/10Aug$ cc SumofPossdiv.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/LogicBulding/10Aug$ ./a.out 
Enter a Number : 10

Perfect divisors of 10 are : 1 2 5 10 
Sum of all Perfect divisors of 10 are 18
 */
