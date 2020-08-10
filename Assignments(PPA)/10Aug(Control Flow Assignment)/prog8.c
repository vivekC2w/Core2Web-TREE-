

#include<stdio.h>

void main() {

	int rows;
	printf("Enter Number of Rows : ");
	scanf("%d",&rows);

	for(int i=0; i<rows; i++) {

		for(int j=0; j<(rows*2-1); j++) {

			if((i-j>=1) || (i+j>=9)) {

				printf("\t");

			}else {
			
				if(i%2==0)
					printf("%c\t",65+(i+j));
				else 
					printf("=\t");

			}

		}
		printf("\n");
	}
}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Assignments(PPA)/10Aug(Control Flow Assignment)$ cc prog8.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Assignments(PPA)/10Aug(Control Flow Assignment)$ ./a.out 
Enter Number of Rows : 5
A	B	C	D	E	F	G	H	I	
	=	=	=	=	=	=	=		
		E	F	G	H	I			
			=	=	=				
				I	 */
