

#include<stdio.h>

void main() {

	int n, fact = 1;

	printf("Enter a number :");
	scanf("%d",&n);

	for(int i=n; i>=1; i--) 
		fact*=i;

	printf("Factorial of %d is %d \n",n, fact);

}

/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/LogicBulding/29JulyFor$ cc 29JulyFor.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/LogicBulding/29JulyFor$ ./a.out 
Enter a number :5
Factorial of 5 is 120 
vivek@vivek-HIRAY:~/Core2Web-TREE-/LogicBulding/29JulyFor$ ./a.out 
Enter a number :10
Factorial of 10 is 3628800 
vivek@vivek-HIRAY:~/Core2Web-TREE-/LogicBulding/29JulyFor$ ./a.out 
Enter a number :7
Factorial of 7 is 5040 
 */
