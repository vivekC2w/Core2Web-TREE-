
#include<stdio.h>

void main() {

	int num = 120;
	
	if(num % 2 == 0) {						//if(120%2==0)
									//if(1)
		printf("%d is divisible by 2\n",num);			//120 is divisible by 2

		if(num % 3 == 0) {					//if(120%3==0)
									//if(1)							
			printf("%d is divisible by 3\n",num);		//120 is divisible by 3

			if(num % 5 ==0) {				//if(120%5==0)
									//if(1)
				printf("%d is divisible by 5\n",num);	//120 is divisible by 5

			}else {

				printf("%d is not divisible by 5",num);

			}
			}else {

				printf("%d is not divisible by 3",num);

			}

		}
	else {

		printf("%d is not divisible by 2",num);

	}

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun/ifelseStateAssign$ cc ifelse12.c
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun/ifelseStateAssign$ ./a.out 
120 is divisible by 2
120 is divisible by 3
120 is divisible by 5
 */
