/*
 Take an integer from the user and print it, Exit the loop whenever user enters a palindrome number
 */ 

#include <stdio.h>

void main() {

	int num, rem, num1, reversed_num;

	do {
		reversed_num=0;
		printf("Take an integer from User : ");
        	scanf("%d",&num);
		num1 = num;

		while(num!=0) {
		
			rem = num % 10;
			reversed_num = reversed_num * 10 + rem;
			num = num / 10;

		}
		printf("Entered number : %d\n",num1);

	}while(num1!=reversed_num);

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/7Aug$ cc cs2.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/7Aug$ ./a.out 
Take an integer from User : 12
Entered number : 12
Take an integer from User : 121
Entered number : 121
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/7Aug$ ./a.out 
Take an integer from User : 15
Entered number : 15
Take an integer from User : 146
Entered number : 146
Take an integer from User : 12321
Entered number : 12321
 */
