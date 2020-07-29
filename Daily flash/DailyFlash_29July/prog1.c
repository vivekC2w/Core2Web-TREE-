

#include<stdio.h>

void main() {

	for(int rows = 1; rows <= 5; rows++) {

		int num = 1;
		
		for(int space = 1; space < rows; space++) {

			printf("\t");
			num++;

		}
               
		for(int cols = 5; cols >= rows; cols--) {

			printf("%d\t",rows*num);
			num++;

		}
		printf("\n");

	}

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_29July$ cc prog1.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash/DailyFlash_29July$ ./a.out 
1	2	3	4	5	
	4	6	8	10	
		9	12	15	
			16	20	
				25	
			    	*/               
