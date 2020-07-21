

#include<stdio.h>

void main() {

	int a;              //Defination statements
	int b = 20;	    //Defination statements
	
	printf("%d\n",a);   //0
	printf("%d\n",b);   //20

	printf("%ld\n",sizeof(a)); //4
	printf("%ld\n",sizeof(b)); //4

}
/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/25jun$ cc DefinationDemo.c 
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/25jun$ ./a.out 
0
20
4
4
 */
