

#include<stdio.h>

void main() {

	int x, y;

	printf("Enter Two Values : \n");
	scanf("%d %d",&x,&y);

	if(x == y)
		printf("x and y are equal\n");

	printf("Out of if\n");

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/scanf(ipFromUser)/8July(PPA)$ cc ifDemo3.c
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/scanf(ipFromUser)/8July(PPA)$ ./a.out 
Enter Two Values : 
15
15
x and y are equal
Out of if
 */
