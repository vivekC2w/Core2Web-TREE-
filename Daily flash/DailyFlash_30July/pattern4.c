

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

                                        printf("%d\t",j);

                        }

                }
                printf("\n");

        }

}
