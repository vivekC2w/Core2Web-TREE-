

#include<stdio.h>

void main() {

	int num, cnt = 0, pow = 1;

	printf("Input : \n");
	printf("Enter Number : ");
	scanf("%d",&num);
	int num1 = num;

	printf("Output : \n");
	while(num!=0) {

		num = num / 10;
		cnt++;

	}
	printf("%d\n",cnt);

	for(int i=1; i<cnt; i++) {

		pow = 10*pow;

	}

	printf("First Digit : %d\n",num1/pow);
	printf("Last Digit : %d\n",(num1%10));
	printf("\n");

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Assignments(PPA)/10Aug(Control Flow Assignment)$ cc prog3.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Assignments(PPA)/10Aug(Control Flow Assignment)$ ./a.out 
Input : 
Enter Number : 123456
Output : 
6
First Digit : 1
Last Digit : 6
*/

