

#include<stdio.h>

void main() {

	int rows, cols, a = 4;
	printf("Enter number of rows and columns :");
	scanf("%d %d",&rows, &cols );

	for(int i=1; i<=rows; i++) {

		for(int j=1; j<=cols; j++) {

			if(i+j<=rows || j-i>=rows) {

				printf("\t");

			}else {

				if(j<=rows) {

					printf("%d\t",(5-j)*(5-j)*(5-j));

				}else {
					
					printf("%d\t",(j-3)*(j-3));

				}

			}
			printf("\n");

	}

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_30July$ cc pattern4.c
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_30July$ ./a.out 
Enter number of rows and columns :4 7
			4				
		3	4	5			
	2	3	4	5	6		
1	2	3	4	5	6	7	
*/	
