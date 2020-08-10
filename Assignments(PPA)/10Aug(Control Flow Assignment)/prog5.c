
#include<stdio.h>

void main() {

	int rows;
	int prevTerm = 0;
       	int currTerm = 1;
	int nextTerm;
	printf("Enter Number of rows : ");
	scanf("%d",&rows);

	printf("Output : \n");

	for(int i = 0; i < rows; i++) {

		for(int j = 0; j <= i; j++) {

			printf("%d  ",prevTerm);
			nextTerm = prevTerm + currTerm;
			prevTerm = currTerm;
			currTerm = nextTerm;

		}

		printf("\n");
	}

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Assignments(PPA)/10Aug(Control Flow Assignment)$ cc prog5.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Assignments(PPA)/10Aug(Control Flow Assignment)$ ./a.out 
Enter Number of rows : 4
Output : 
0  
1  1  
2  3  5  
8  13  21  34  
*/

