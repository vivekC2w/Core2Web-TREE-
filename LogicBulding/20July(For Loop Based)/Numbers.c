
#include<stdio.h>

void main() {

	for(int i = 0, j = 0; i <= 10 ; i++, j--) 
		printf("i = %d and j = %d\n",i,j);

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/LogicBulding/20July(For Loop Based)$ cc Numbers.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/LogicBulding/20July(For Loop Based)$ ./a.out 
i = 0 and j = 0
i = 1 and j = -1
i = 2 and j = -2
i = 3 and j = -3
i = 4 and j = -4
i = 5 and j = -5
i = 6 and j = -6
i = 7 and j = -7
i = 8 and j = -8
i = 9 and j = -9
i = 10 and j = -10
 */
