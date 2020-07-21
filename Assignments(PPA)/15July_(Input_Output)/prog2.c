

#include<stdio.h>

void main() {

	char ch;
	printf("Input: \n");
	scanf("%c",&ch);

	printf("Output:");
	if(ch >= 'A' && ch <= 'Z') {

		printf("Entered Character is UPPERCASE character\n");

	}else {

		printf("Entered Character is LOWERCASE character\n");

	}

}
/*
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/15July_(Input_Output)$ vim prog2.c
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/15July_(Input_Output)$ cc prog2.c
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/15July_(Input_Output)$ ./a.out 
Input: 
a
Output:Entered Character is LOWERCASE character
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/15July_(Input_Output)$ cc prog2.c
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/15July_(Input_Output)$ ./a.out 
Input: 
A
Output:Entered Character is UPPERCASE character
 */
