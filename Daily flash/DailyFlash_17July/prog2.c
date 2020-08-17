

#include<stdio.h>

void main() {

	int num;
	printf("Enter a Number : ");
	scanf("%d",&num);

	if(num>=0) {

		if(num == 0 )
			printf("%d is Equal to Zero\n",num);
		else 
			printf("%d is positive number\n",num);

	}else {

		printf("%d is negative number\n",num);

	}

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_17July$ cc prog2.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_17July$ ./a.out 
Enter a Number : -4
-4 is negative number
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_17July$ ./a.out 
Enter a Number : 5
5 is positive number
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_17July$ ./a.out 
Enter a Number : 0
0 is Equal to Zero
 */
