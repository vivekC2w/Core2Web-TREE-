

#include<stdio.h>

int main() {

	int year = 2020;

	if(year%4==0 && year%100!=0 || year%400==0) {		//if(1 && 1 || year%400==0)
								//if(1 || year%400==0)
		printf("%d year is a leap year\n",year);			//if(1) //2020 is a leap year

	}

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun/ifelseStateAssign$ cc ifelse8.c
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun/ifelseStateAssign$ ./a.out 
2020 year is a leap year */
