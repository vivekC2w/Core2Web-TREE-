

#include<stdio.h>

void main() {

	int rows, cols;
	printf("Enter number of rows and columns :");
	scanf("%d %d",&rows, &cols );

	for(int i=1; i<=rows; i++) {

		int a = 1;

		for(int j=1; j<=cols; j++) {

			if(i+j<=rows || j-i>=rows) {

				printf("  ");

			}else {

				printf("%d ",a);
				a++;

			}

		}
		printf("\n");

	}

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_30July$ cc pattern2.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_30July$ ./a.out 
Enter number of rows and columns :5 9
        1         
      1 2 3       
    1 2 3 4 5     
  1 2 3 4 5 6 7   
1 2 3 4 5 6 7 8 9 
 */	
