

#include<stdio.h>

void main() {

	int n;

	printf("Enter a Number :");
	scanf("%d",&n);

	printf("Perfect divisors of %d are :", n);

	for(int i = 1; i <= n; i++) {

		if(n % i == 0) 
			printf("%d ", i);

	}
	printf("\n");

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/LogicBulding/29JulyFor$ ./a.out 
Enter a Number :10
Perfect divisors of 10 are :1 2 5 10 
vivek@vivek-HIRAY:~/Core2Web-TREE-/LogicBulding/29JulyFor$ ./a.out 
Enter a Number :15
Perfect divisors of 15 are :1 3 5 15 
 */	
