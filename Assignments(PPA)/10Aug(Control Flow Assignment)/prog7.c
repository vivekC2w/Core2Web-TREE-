

#include<stdio.h>

void main() {

	int rows;
	printf("Enter Number of Rows : ");
	scanf("%d",&rows);

	for(int i=0; i<rows; i++) {

		for(int j=0; j<(rows*2-1); j++) {

			if((i+j<=3) || (j-i>=5)) {

				printf("\t");

			}else {
			
				if(j%2==0)
					printf("%d\t",i*2);
				else 
					printf("%d\t",i*j);

			}

		}
		printf("\n");
	}
}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Assignments(PPA)/10Aug(Control Flow Assignment)$ cc prog7.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Assignments(PPA)/10Aug(Control Flow Assignment)$ ./a.out 
Enter Number of Rows : 5
				0					
			3	2	5				
		4	6	4	10	4			
	3	6	9	6	15	6	21		
8	4	8	12	8	20	8	28	8	
 */
