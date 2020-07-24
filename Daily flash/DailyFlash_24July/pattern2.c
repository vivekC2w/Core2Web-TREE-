

#include<stdio.h>

void main() {

	for(int i=0; i<=4; i++) {
		
		for(int j=4; j>i; j--) {

			printf("\t");

		}
		for(int k=0; k<=i; k++) {
			
			if(k%2 == 0) 
				printf("0\t");
			else 
				printf("1\t");

		}
		printf("\n");		
	}

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_24July$ cc pattern2.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_24July$ ./a.out 
				0	
			0	1	
		0	1	0	
	0	1	0	1	
0	1	0	1	0	 
*/
