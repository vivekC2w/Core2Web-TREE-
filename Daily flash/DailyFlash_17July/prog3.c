

#include<stdio.h>

void main() {

	int num;
	printf("Enter a Number : ");
	scanf("%d",&num);

	(num%2==0 ? printf("%d is Even Number\n",num) : printf("%d is Odd Number\n",num));

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_17July$ cc prog3.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_17July$ ./a.out 
Enter a Number : 54
54 is Even Number
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_17July$ ./a.out 
Enter a Number : 97
97 is Odd Number
 */
