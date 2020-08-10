
#include<stdio.h>

void main() {

	int rows;
	printf("Enter Number of rows : ");
	scanf("%d",&rows);

	for(int i=0; i<rows; i++) {

		for(int j=0; j<rows; j++) {

			if(i-j>0) {

				printf("\t");

			}else {

				printf("%d\t",(i+j)*j);

			}

		}
		printf("\n");

	}

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Assignments(PPA)/10Aug(Control Flow Assignment)$ cc prog6.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Assignments(PPA)/10Aug(Control Flow Assignment)$ ./a.out 
Enter Number of rows : 5
0	1	4	9	16	
	2	6	12	20	
		8	15	24	
			18	28	
				32	
			       
		       	       */
