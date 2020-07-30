

#include<stdio.h>

void main() {

        int rows, cols;
        printf("Enter number of rows and columns :");
        scanf("%d %d",&rows, &cols );

        for(int i=1; i<=rows; i++) {

		int ch1 = 64, ch2 = 72;

                for(int j=1; j<=cols; j++) {

                        if(i+j<=rows || j-i>=rows) {

                                printf("\t");

                        }else {

                                if(j<=rows) {

                                        printf("%c\t",ch1+j);

                                }else {

                                        printf("%c\t",ch2-j);

                                }

                        }


		}
                printf("\n");

       	}

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_30July$ cc pattern5.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_30July$ ./a.out 
Enter number of rows and columns :4 7
			D				
		C	D	C			
	B	C	D	C	B		
A	B	C	D	C	B	A	 */
