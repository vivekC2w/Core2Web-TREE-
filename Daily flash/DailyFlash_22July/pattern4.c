

#include<stdio.h>

void main() {

	int outer = 1;

	while(outer <= 4) {

		int inner = 1;
		char ch = 'a';

		while(inner <= 4) {

			if(outer + inner > 4) {

				printf("%c\t",ch);
				ch++;

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
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash$ cc pattern4.c
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash$ ./a.out 
			a	
		a	b	
	a	b	c	
a	b	c	d	 */
