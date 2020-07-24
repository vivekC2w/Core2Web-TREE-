

#include<stdio.h>

void main() {

	for(int i=0; i<=4; i++) {
		
		int n = 1;

		for(int j=4; j>i; j--) {

			printf("\t");

		}
		n = n + i;
		for(int k=0; k<=i; k++) {
			
			printf("%d\t",n);
			n--;
		}
		printf("\n");		
	}

}
/*
 vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_24July$ cc pattern5.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_24July$ ./a.out 
				1	
			2	1	
		3	2	1	
	4	3	2	1	
5	4	3	2	1	
*/
