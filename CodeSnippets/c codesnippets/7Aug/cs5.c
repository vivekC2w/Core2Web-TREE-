/*
 Take an integer from the user and print it, Exit the loop whenever user enters a prime number
 */ 

#include <stdio.h>

void main() {

	int num, cnt;

	do {
		cnt = 0;
		printf("Take an integer from User : ");
        	scanf("%d",&num);

		for(int i=2; i<=num; i++) {

			if(num%i==0) {

				cnt++;

			}

		}
		printf("Entered number : %d\n",num);

	}while(cnt>1);

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/7Aug$ cc cs2.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/7Aug$ ./a.out 
Take an integer from User : 10
Entered number : 10
Take an integer from User : 6
Entered number : 6
Take an integer from User : 4
Entered number : 4
Take an integer from User : 3
Entered number : 3
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/7Aug$ ./a.out 
Take an integer from User : 16
Entered number : 16
Take an integer from User : 14
Entered number : 14
Take an integer from User : 5
Entered number : 5
 */
