

#include<stdio.h>

void main() {

	for(int i = 1; i <= 10; i++) {

		(i % 2 != 0 ? printf("Odd : %d\n",i) : printf("Even : %d\n",i));

	}

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/LogicBulding/20July(For Loop Based)$ cc IsEvenOdd.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/LogicBulding/20July(For Loop Based)$ ./a.out 
Odd : 1
Even : 2
Odd : 3
Even : 4
Odd : 5
Even : 6
Odd : 7
Even : 8
Odd : 9
Even : 10
 */
			
