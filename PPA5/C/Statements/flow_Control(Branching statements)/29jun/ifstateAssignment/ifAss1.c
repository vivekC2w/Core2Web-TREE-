

#include<stdio.h>

void main() {

	int a = 1, b = 0;

	if(a++ || ++b)                // if(2 || 0)  = True
		printf("Hello\n");    //  Hello
	
	if(--b && a--)		      //if(1 && -1)  = True
		printf("Hii\n");      //   Hii
	
}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/29jun$ cc ifAss1.c
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/29jun$ ./a.out 
Hello
Hii
 */
