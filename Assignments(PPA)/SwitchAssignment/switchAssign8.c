
#include<stdio.h>

void main() {

	int choice;

	printf("Enter Number between 0 to 5:\n");
	scanf("%d",&choice);

	switch(choice) {

		case 0:
			printf("ZERO\n");
			break;
		
		case 1:
			printf("ONE\n");
			break;

		case 2:
			printf("TWO\n");
			break;

		case 3:
			printf("THREE\n");
			break;

		case 4:
			printf("FOUR\n");
			break;

		case 5:
			printf("FIVE\n");
			break;

		default:
			printf("ENTERED NUMBER IS GREATER THAN 5\n");
			break;

	}

}
/*
vivek@vivek-HIRAY:~/Desktop/SwitchAssignment$ cc switchAssign8.c
vivek@vivek-HIRAY:~/Desktop/SwitchAssignment$ ./a.out 
Enter Number between 0 to 5:
0
ZERO
vivek@vivek-HIRAY:~/Desktop/SwitchAssignment$ ./a.out 
Enter Number between 0 to 5:
1
ONE
vivek@vivek-HIRAY:~/Desktop/SwitchAssignment$ ./a.out 
Enter Number between 0 to 5:
5
FIVE
vivek@vivek-HIRAY:~/Desktop/SwitchAssignment$ ./a.out 
Enter Number between 0 to 5:
8
ENTERED NUMBER IS GREATER THAN 5
 */
