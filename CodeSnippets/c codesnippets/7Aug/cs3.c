/*
Write a program to accept a number from user and print that number by decrementing until it reches 0 using do while loop
 */

#include <stdio.h>

void main() {
	
	int num;	
	printf("Enter a number form user : ");
        scanf("%d",&num);

	do {

		printf("Number = %d\n",num);
		num-=1;

	}while(num!=0);

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/7Aug$ cc cs3.c
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/7Aug$ ./a.out 
Enter a number form user : 5
Number = 5
Number = 4
Number = 3
Number = 2
Number = 1
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/7Aug$ ./a.out 
Enter a number form user : 6
Number = 6
Number = 5
Number = 4
Number = 3
Number = 2
Number = 1
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/7Aug$ ./a.out 
Enter a number form user : 3
Number = 3
Number = 2
Number = 1
 */
