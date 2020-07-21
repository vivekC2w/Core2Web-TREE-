

#include<stdio.h>

void main() {

	int a = 10, b = 20;

	if((a++ < 10) && (++a && ++b))                // if(0 && 1)  = False
		printf("Hello\n");    		      
	
	if((b++ <= 20) || (++a <= b++))		      //if(0 || 1)  = True
		printf("Hii\n");      		      //   Hii
	
}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/29jun$ cc ifAss2.c
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/29jun$ ./a.out 
Hii
 */
