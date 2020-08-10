
#include<stdio.h>

void main() {

	int num;
	char ch = 'Y';
	printf("Input/Output\n");

	while(ch=='Y') {
		
		printf("Enter Number : ");
	        scanf("%d",&num);

		int sum = 0;
		for(int i=1; i<num; i++) {

			if(num%i==0) {

				sum = sum + i;

			}
			
		}
		if(sum == num) 
			printf("%d is perfect number\n",num);
		else	
			printf("%d is not perfect Number\n",num);
		printf("Do You Wany To Continue?(Y/N) : ");
		scanf(" %c",&ch);
	}

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Assignments(PPA)/10Aug(Control Flow Assignment)$ cc prog10.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Assignments(PPA)/10Aug(Control Flow Assignment)$ ./a.out 
Input/Output
Enter Number : 6
6 is perfect number
Do You Wany To Continue?(Y/N) : Y
Enter Number : 12
12 is not perfect Number
Do You Wany To Continue?(Y/N) : N
 */
	
