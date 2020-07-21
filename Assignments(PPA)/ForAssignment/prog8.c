

#include<stdio.h>

void main() {

	char ch1, ch2;
	printf("Ip -> ");
	scanf("%c %c",&ch1,&ch2);

	for(char ch=ch1; ch>=ch2; ch--) {

		printf("%c ",ch);

	}
	printf("\n");

}
/*
vivek@vivek-HIRAY:~/Desktop/ForAssignment$ cc prog8.c
vivek@vivek-HIRAY:~/Desktop/ForAssignment$ ./a.out 
Ip -> y j
y x w v u t s r q p o n m l k j 
 */
