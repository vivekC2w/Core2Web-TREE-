

#include<stdio.h>

void main() {

	int a = 5;
	int b = 10;
	int c = 0;

	if(a && b)				//True && True  = True
		printf("Core2Web\n");		//Core2Web

	if(b && c)				//True && False = False
		printf("BiEncaps\n");

	if(b || c)				//True || False = True
		printf("Amazon\n");

}

/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)$ cc ifDemo4.c
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)$ ./a.out
Core2Web
Amazon
 */
