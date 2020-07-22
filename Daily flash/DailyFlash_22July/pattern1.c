
#include<stdio.h>

void main() {

	int outer = 1, num = 1;

	while(outer <= 5) {

		int inner = 1;
		
		while(inner <= outer) {
			
			printf("%d\t",num);
			num++;
			inner++;

		}
		num = num - 1;

		printf("\n");
		outer++;

	}

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash$ cc pattern1.c
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash$ ./a.out 
1	
1	2	
2	3	4	
4	5	6	7	
7	8	9	10	11	
 */		
