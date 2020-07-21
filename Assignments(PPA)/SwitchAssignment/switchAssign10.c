

#include<stdio.h>

void main() {

	int num1, num2, mult;

	printf("Enter Two Numbers : \n");
	scanf("%d %d",&num1, &num2);

	if(num1 > 0 && num2 > 0) {
		
		mult = num1 * num2;

		switch(mult % 2 == 0) {

			case 0:
				printf("%d is Odd Number\n",mult);
				break;

			case 1:
				printf("%d is Even Number\n",mult);
				break;

		}

	}else {

		printf("Sorry Negative Numbers NOt allowed\n");

	}

}
/*
vivek@vivek-HIRAY:~/Desktop/SwitchAssignment$ cc switchAssign10.c
vivek@vivek-HIRAY:~/Desktop/SwitchAssignment$ ./a.out 
Enter Two Numbers : 
15  
3
45 is Odd Number
vivek@vivek-HIRAY:~/Desktop/SwitchAssignment$ ./a.out 
Enter Two Numbers : 
20
5
100 is Even Number
vivek@vivek-HIRAY:~/Desktop/SwitchAssignment$ ./a.out 
Enter Two Numbers : 
2
5
10 is Even Number
vivek@vivek-HIRAY:~/Desktop/SwitchAssignment$ ./a.out 
Enter Two Numbers : 
5
3
15 is Odd Number
vivek@vivek-HIRAY:~/Desktop/SwitchAssignment$ ./a.out 
Enter Two Numbers : 
15
-3
Sorry Negative Numbers NOt allowed
 */
