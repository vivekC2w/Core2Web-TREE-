
#include<stdio.h>

void main() {

	int num, cnt = 0;
	printf("Input :\n");			//Input :
	scanf("%d",&num);			//15

	for(int i=25; i<=50; i++) {		//for loop ranges between 25 to 50

		if(i==num) {			//if(i==15)
						//if(0)
			cnt += 1;		//cnt = 0

		}

	}
	if(cnt == 1) {				//if(0 == 1)
						//if(0)
		printf("Output: %d belong in the range of 25 to 50.\n",num);

	}else {					//else part will execute	
		
		printf("Output: %d Doesn't belong in the range of 25 to 50.\n",num);

	}

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun/ifelseStateAssign$ cc ifelse14.c
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun/ifelseStateAssign$ ./a.out 
Input :
15
Output: 15 Doesn't belong in the range of 25 to 50.
*/
