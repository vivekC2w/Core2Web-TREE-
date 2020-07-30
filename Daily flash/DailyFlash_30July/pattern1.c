

#include<stdio.h>

void main() {

	int rows, cols;
	char ch = 'A';
	printf("Enter no of rows and cols :");
	scanf("%d %d",&rows, &cols);	

	for(int i=1; i<=rows; i++) {

		for(int j=1; j<=cols; j++) {

			if(i+j<=rows || j-i>=rows) {

				printf("  ");

			}else {

				printf("%c ",ch);

			}

		}
		ch++;
		printf("\n");

	}

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_30July$ cc pattern1.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_30July$ ./a.out 
Enter no of rows and cols :5
9
        A         
      B B B       
    C C C C C     
  D D D D D D D   
E E E E E E E E E 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_30July$ cc pattern1.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_30July$ ./a.out 
Enter no of rows and cols :4
7
      A       
    B B B     
  C C C C C   
D D D D D D D 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_30July$ ./a.out 
Enter no of rows and cols :6 11
          A           
        B B B         
      C C C C C       
    D D D D D D D     
  E E E E E E E E E   
F F F F F F F F F F F 
 */
