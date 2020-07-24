

#include<stdio.h>

void main() {

	for(int i=0; i<=4; i++) {
		
		int ch = 69;

		for(int j=4; j>i; j--) {

			printf("\t");

		}
		ch = ch - i;
		for(int k=0; k<=i; k++) {
			
			printf("%c\t",ch);
			ch++;
		}
		printf("\n");		
	}

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_24July$ cc pattern4.c
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_24July$ ./a.out 
				E	
			D	E	
		C	D	E	
	B	C	D	E	
A	B	C	D	E	
*/
