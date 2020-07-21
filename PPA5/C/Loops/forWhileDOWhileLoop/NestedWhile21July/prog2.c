/*
 A 2 C 4 E 
 F 7 H 9
 J 11 L
 M 14
 O

 */
#include<stdio.h>

void main() {

	char ch = 'A';

	int num = 1;

	int outer = 1;

	while(outer <= 5) {

		int inner = 1;

		while(inner <= 6 - outer) {

			if(inner % 2 != 0) {

				printf("%c\t",ch);

			}else {

				printf("%d\t",num);

			}
			ch++;
			num++;
			inner++;
		}
		printf("\n");
		outer++;

	}

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/PPA5/C/Loops/forWhileDOWhileLoop/NestedWhile21July$ cc prog2.c
vivek@vivek-HIRAY:~/Core2Web-TREE-/PPA5/C/Loops/forWhileDOWhileLoop/NestedWhile21July$ ./a.out 
A	2	C	4	E	
F	7	H	9	
J	11	L	
M	14	
O	
 */
