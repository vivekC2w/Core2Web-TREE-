
#include<stdio.h>

void main() {

	int num;
	char ch = 'Y';
	printf("Input/Output\n");

	while(ch=='Y') {
		
		printf("Enter Number : ");
	        scanf("%d",&num);
        	int num1 = num;

		int sum = 0;
		while(num!=0) {

			int rem = num % 10;
			int mult = 1;
			for(int i=1; i<=rem; i++) {

				mult = mult * i;

			}
			sum = sum + mult;
			num = num / 10;
		}
		if(sum == num1) 
			printf("It is a strong Number\n");
		else	
			printf("It is not a strong Number\n");
		printf("Do You Wany To Continue?(Y/N) : ");
		scanf(" %c",&ch);
	}

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Assignments(PPA)/10Aug(Control Flow Assignment)$ cc prog9.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Assignments(PPA)/10Aug(Control Flow Assignment)$ ./a.out 
Input/Output
Enter Number : 124
It is not a strong Number
Do You Wany To Continue?(Y/N) : Y
Enter Number : 145
It is a strong Number
Do You Wany To Continue?(Y/N) : N
 */
	
