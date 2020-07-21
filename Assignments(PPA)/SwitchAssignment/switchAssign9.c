
#include<stdio.h>

void main() {

	int choice;

	printf("Input : Enter Month Number: ");
	scanf("%d",&choice);

	switch(choice) {

		case 1:
			printf("Output : Jan has 31 days\n");
			break;
		
		case 2:
			printf("Output : Feb has 28 0r 29 days\n");
			break;

		case 3:
			printf("Output : mar has 31 days\n");
			break;

		case 4:
			printf("Output : Apr has 30 days\n");
			break;

		case 5:
			printf("Output : May has 31 days\n");
			break;

		case 6:
			printf("Output : Jun has 30 days\n");
			break;

		case 7:
			printf("Output : July has 31 days\n");
			break;

		case 8:
			printf("Output : Aug has 31 days\n");
			break;

		case 9:
			printf("Output : Sept has 30 days\n");
			break;

		case 10:
			printf("Output : Oct has 31 days\n");
			break;

		case 11:
			printf("Output : Nov has 30 days\n");
			break;

		case 12:
			printf("Output : Dec has 31 days\n");
			break;

		default:
			printf("Invalid Input\n");
			break;

	}

}
/*
vivek@vivek-HIRAY:~/Desktop/SwitchAssignment$ cc switchAssign9.c
vivek@vivek-HIRAY:~/Desktop/SwitchAssignment$ ./a.out 
Input : Enter Month Number: 7
Output : July has 31 days
vivek@vivek-HIRAY:~/Desktop/SwitchAssignment$ ./a.out 
Input : Enter Month Number: 13
Invalid Input
vivek@vivek-HIRAY:~/Desktop/SwitchAssignment$ ./a.out 
Input : Enter Month Number: 3
Output : mar has 31 days
 */
