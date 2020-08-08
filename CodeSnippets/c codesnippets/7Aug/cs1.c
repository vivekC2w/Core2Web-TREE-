/*
Write a prog in c to multiply two numbers without actually using the * operator by using do while loop
*/

#include <stdio.h>

void main () {

	int num1, num2, cnt = 0, sum = 0;
	printf("Enter First Number : ");
	scanf("%d",&num1);
	printf("Enter Second Number : ");
	scanf("%d",&num2);

	do {
		
		sum = sum + num1;
		cnt++;

	}while(cnt<num2);

	printf("Mutiplication of %d and %d is = %d\n",num1, num2, sum);

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/7Aug$ cc cs1.c
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/7Aug$ ./a.out 
Enter First Number : 2
Enter Second Number : 3
Mutiplication of 2 and 3 is = 6
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/7Aug$ ./a.out 
Enter First Number : 4
Enter Second Number : 5
Mutiplication of 4 and 5 is = 20
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/7Aug$ ./a.out 
Enter First Number : 10
Enter Second Number : 10
Mutiplication of 10 and 10 is = 100
 */
