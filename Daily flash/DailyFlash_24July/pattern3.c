

#include<stdio.h>

void main() {

	for(int i=0; i<=4; i++) {
		
		int n = 5;

		for(int j=4; j>i; j--) {

			printf("\t");

		}
		int sq = n - i;
		for(int k=0; k<=i; k++) {
			
			printf("%d\t",sq*sq);
			sq++;
		}
		printf("\n");		
	}

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_24July$ cc pattern3.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_24July$ ./a.out 
				25	
			16	25	
		9	16	25	
	4	9	16	25	
1	4	9	16	25	
*/
