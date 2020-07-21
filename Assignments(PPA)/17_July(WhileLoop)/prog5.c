#include<stdio.h>

void main() {

	int ub, lb, sq = 1, cube = 1;
	printf("Ouput:\n");
	printf("Enter Lower bound of range:");
	scanf("%d",&lb);
	printf("Enter Upper bound of range:");
	scanf("%d",&ub);

	int i = lb;

	while(i<=ub) {

		if(i%2!=0) {

			cube = i*i*i;
			printf("%d ",cube);

		}else {

			sq = i * i;
			printf("%d ",sq);

		}

		i++;

	}
	print("\n");

}
/*
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/17_July(WhileLoop)$ cc prog5.c
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/17_July(WhileLoop)$ ./a.out 
Ouput:
Enter Lower bound of range:1
Enter Upper bound of range:5
1 4 27 16 125 
*/
