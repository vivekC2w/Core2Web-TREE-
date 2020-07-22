
#include<stdio.h>

void main() {

	int num, sum = 0; 

	printf("Enter Number to check weather is it Strong num or not..==> ");
	scanf("%d",&num);

	int num1 = num;

	while(num > 0) {

		int rem = num % 10;
		int fact = 1;

		for(int i = 1; i <= rem; i++) {

			fact = fact * i;
		        
		}
		
		sum  = sum  + fact;

		num = num / 10;
		printf("sum = %d\n",sum);
	}	
	if(sum == num1) {

		printf("%d is Strong Num \n",num1);

	}

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash$ cc IsStrongNum.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash$ ./a.out 
Enter Number to check weather is it Strong num or not..==> 145
sum = 120
sum = 144
sum = 145
145 is Strong Num 
 */
