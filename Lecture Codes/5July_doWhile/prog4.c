

#include <stdio.h>

void main() {

	int num;
	char ch = 'y';


	do {

		printf("Enter number :\n");
		scanf("%d",&num);

		int var = num;
		int rem = 0;
		int sum = 0;

		while(num!=0) {

			rem = num % 10;
			sum = sum*10 + rem;
			num = num / 10;

		}

		printf("rev of %d is %d\n",var, sum);

		printf("do you want to continues : \n");
		scanf(" %c",&ch);

	} while(ch == 'y' || ch == 'Y');

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Lecture Codes/5July_doWhile$ cc prog4.c
vivek@vivek-HIRAY:~/Core2Web-TREE-/Lecture Codes/5July_doWhile$ ./a.out 
Enter number :
125
rev of 125 is 521
do you want to continues : 
y
Enter number :
356
rev of 356 is 653
do you want to continues : 
Y
Enter number :
4865
rev of 4865 is 5684
do you want to continues : 
n
 */
