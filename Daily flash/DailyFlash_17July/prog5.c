

#include<stdio.h>

void main() {

	int num;
	printf("Enter a Number : ");
	scanf("%d",&num);

	(num%5==0 && num%11==0 ? printf("%d is divisible by 5 and 11\n",num) : printf("%d is not divisible by 5 and 11\n",num) );

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_17July$ cc prog5.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_17July$ ./a.out 
Enter a Number : 55
55 is divisible by 5 and 11
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_17July$ ./a.out 
Enter a Number : 454
454 is not divisible by 5 and 11
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_17July$ ./a.out 
Enter a Number : 555
555 is not divisible by 5 and 11
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_17July$ ./a.out 
Enter a Number : 605
605 is divisible by 5 and 11
 */
