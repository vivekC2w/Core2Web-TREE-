
#include<stdio.h>

void main() {

	char lb, ub;
	printf("Input:\n");
	printf("Lower Bound of range:\n");
	scanf("%c",&lb);
	printf("Upper Bound of range:\n");
	scanf(" %c",&ub);
	printf("Output:\n");
	char ch = lb;
	while(ch <= ub) {

		if(ch== 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch== 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {

			printf("%c is vowel\n",ch);

		}else {

			printf("%c is consonant\n",ch);

		}

		ch++;

	}

}
/*
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/17_July(WhileLoop)$ cc prog2.c
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/17_July(WhileLoop)$ ./a.out 
Input:
Lower Bound of range:
C
Upper Bound of range:
D
Output:
C is consonant
D is consonant
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/17_July(WhileLoop)$ ./a.out 
Input:
Lower Bound of range:
C
Upper Bound of range:
F
Output:
C is consonant
D is consonant
E is vowel
F is consonant
 */
		

