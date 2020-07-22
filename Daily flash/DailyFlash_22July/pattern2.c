
#include<stdio.h>

void main() {

	int outer = 1, num = 5, num1 = 1;

	while(outer <= 5) {

		int inner = 1;
		
		while(inner <= 6 - outer) {
			
			printf("%d\t",num);
			num = num - outer;
			inner++;

		}
		
		num1++;
		num = ((num+num1) * (5-outer));

		printf("\n");
		outer++;

	}

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash$ cc pattern2.c
vivek@vivek-HIRAY:~/Core2Web-TREE-/Daily flash$ ./a.out 
5	4	3	2	1	
8	6	4	2	
9	6	3	
8	4	
5	
 */		
