
#include<stdio.h>

void main() {

	int outer = 1,num = 1;

	while(outer <= 4) {

		int inner = 1;
		
		while(inner <= 8) {

			if(((outer+inner)>4) && ((inner-outer)<4) && ((inner+outer)%2!=0)) {
			
					printf("%d\t",num);
					num++;

			}else {

				printf("\t");

			}
			inner++;

		}

		printf("\n");
		outer++;

	}

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash$ cc pattern3.c
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash$ ./a.out 
			1					
		2		3				
	4		5		6			
7		8		9		10		
 */		
