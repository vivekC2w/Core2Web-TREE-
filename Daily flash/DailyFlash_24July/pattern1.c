

#include<stdio.h>

void main() {

	for(int i=0; i<=4; i++) {

		int ch = 65;
		int ch1 = 65 + i;
		
		for(int j=4; j>i; j--) {

			printf("\t");

		}
		for(int k=0; k<=i; k++) {
			
			printf("%c\t",(ch1));
			ch1++;
	
		}
		printf("\n");		
	}

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_24July$ cc pattern1.c
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_24July$ ./a.out 
					A	
				B	C	
			C	D	E	
		D	E	F	G	
	E	F	G	H	I	
 */
