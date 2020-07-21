

#include<stdio.h>

void main() {

	int x, y, z;

	printf("Enter three numbers: \n");
	scanf("%d %d %d",&x, &y, &z);

	if(x > y) {

		if(x > z) {

			printf("%d is greater\n",x);

		}else {

			printf("%d is greater\n",z);

		}

	}else {

		if(y > z) {

			printf("%d is greater\n",y);

		}else {

			printf("%d is greater\n",z);

		}

	}

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/scanf(ipFromUser)/8July(PPA)$ cc ifDemo5.c
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/scanf(ipFromUser)/8July(PPA)$ ./a.out 
Enter three numbers: 
10
20
30
30 is greater
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/scanf(ipFromUser)/8July(PPA)$ ./a.out 
Enter three numbers: 
50
70
60
70 is greater
 */
