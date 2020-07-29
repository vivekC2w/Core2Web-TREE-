



#include<stdio.h>

void main() {

        int rows, cols;
        printf("Enter Num of rows: ");
        scanf("%d",&rows);
        printf("Enter Num of cols: ");
        scanf("%d",&cols);

        for(int i = 1; i <= rows; i++ ) {
		
		int x = 1;

		for(int space = rows-1; space >= i; space--) {

			printf("  ");

		}
		for(int j = 1; j <= (i*2)-1; j++) {

			printf("%d ",x);
			
			if(j >= i)
				x--;
			else 
				x++;

		}
		printf("\n");

	}

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Lecture Codes/29July_Pattern3$ cc pattern2.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Lecture Codes/29July_Pattern3$ ./a.out 
Enter Num of rows: 4
Enter Num of cols: 7
      1 
    1 2 1 
  1 2 3 2 1 
1 2 3 4 3 2 1 
 */
