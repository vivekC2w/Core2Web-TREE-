
#include<stdio.h>

void main() {

	int ilc = 15, olc = 25;

	if(olc > ilc) {				//if(25 > 15)
						//if(1)
		printf("ilc :%d\n",ilc);	//ilc :15

	}

	if(ilc < olc);{				//if(15 < 25);     // Null Statement

		printf("ilc :%d\n",ilc);	//ilc: 15

	}

	printf("olc :%d\n",olc);		//olc :25
	printf("ilc :%d\n",ilc);		//ilc :15

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun/ifelseStateAssign$ cc ifelse3.c
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun/ifelseStateAssign$ ./a.out 
ilc :15
ilc :15
olc :25
ilc :15
 */
