
#include<stdio.h>

void main() {

	char ch = '/';
	int a = 10;
	int b = 20;

	switch(ch) {

		case '+':
			printf("%d\n",a+b);
			break;

		case '-':
			printf("%d\n",a-b);
			break;

		case '*':
			printf("%d\n",a*b);
			break;

		case '/':
			printf("%d\n",a/b);
			break;

		default :
			printf("In Default\n");
			break;

	}

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/2july$ cc switchStatement20.c
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/2july$ ./a.out 
30
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/2july$ vim switchStatement20.c
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/2july$ cc switchStatement20.c
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/2july$ ./a.out 
-10
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/2july$ vim switchStatement20.c
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/2july$ cc switchStatement20.c
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/2july$ ./a.out 
200
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/2july$ vim switchStatement20.c
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/2july$ cc switchStatement20.c
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/2july$ ./a.out 
0
 */
