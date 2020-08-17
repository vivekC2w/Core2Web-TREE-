

#include<stdio.h>

void main() {

	int num, flag = 0;
	printf("Enter a Number : ");
	scanf("%d",&num);

	for(int i = 2; i <= num/2; i++) {

		if(num % i == 0) {

			flag = 1;

		}

	}

	if(flag == 1)
		printf("%d is not a prime number\n",num);
	else 
		printf("%d is a prime number\n",num);

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/LogicBulding/11Aug$ cc Isprime.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/LogicBulding/11Aug$ ./a.out 
Enter a Number : 13
13 is a prime number
vivek@vivek-HIRAY:~/Core2Web-TREE-/LogicBulding/11Aug$ ./a.out 
Enter a Number : 4
4 is not a prime number
vivek@vivek-HIRAY:~/Core2Web-TREE-/LogicBulding/11Aug$ ./a.out 
Enter a Number : 5
5 is a prime number
vivek@vivek-HIRAY:~/Core2Web-TREE-/LogicBulding/11Aug$ ./a.out 
Enter a Number : 16
16 is not a prime number
vivek@vivek-HIRAY:~/Core2Web-TREE-/LogicBulding/11Aug$ ./a.out 
Enter a Number : 97
97 is a prime number
 */
