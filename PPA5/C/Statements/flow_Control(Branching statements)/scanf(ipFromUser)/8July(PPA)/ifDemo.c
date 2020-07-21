

#include<stdio.h>

void main() {

	int x, y;

	printf("Enter Two Values : \n");
	scanf("%d %d",&x,&y);

	if(x > y)
		printf("x is greater\n");

	printf("Out of if\n");

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/scanf(ipFromUser)/8July(PPA)$ cc ifDemo.c 
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/scanf(ipFromUser)/8July(PPA)$ ./a.out 
Enter Two Values : 
10
20
Out of if
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/scanf(ipFromUser)/8July(PPA)$ ./a.out 
Enter Two Values : 
20
10
x is greater
Out of if
 */
