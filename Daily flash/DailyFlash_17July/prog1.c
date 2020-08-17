

#include<stdio.h>

void main() {

	int num1, num2;
	printf("Enter First Number : ");
	scanf("%d",&num1);
	printf("Enter Second Number : ");
	scanf("%d",&num2);
	(num1>num2 ? printf("%d is maximum\n",num1) : printf("%d is maximum\n",num2));

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_17July$ cc prog1.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_17July$ ./a.out 
Enter First Number : 5
Enter Second Number : 3
5 is maximum
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_17July$ ./a.out 
Enter First Number : 85
Enter Second Number : 20
85 is maximum
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_17July$ ./a.out 
Enter First Number : 20
Enter Second Number : 55
55 is maximum
 */
