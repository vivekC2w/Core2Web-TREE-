

#include<stdio.h>

void main() {

	int rows, cols;
	printf("Enter Num of rows: ");
	scanf("%d",&rows);
	printf("Enter Num of cols: ");
	scanf("%d",&cols);

	for(int i = 1; i <= rows; i++ ) {

		for(int j = 1; j <= cols; j++ ) {

			if(i+j <= rows || j-i >= rows) {

				printf("  ");

			}else {

				printf("* ");

			}

		}
		printf("\n");

	}

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Lecture Codes/29July_Pattern3$ cc pattern1.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Lecture Codes/29July_Pattern3$ ./a.out 
Enter Num of rows: 4
Enter Num of cols: 7
      *       
    * * *     
  * * * * *   
* * * * * * * 
 */
