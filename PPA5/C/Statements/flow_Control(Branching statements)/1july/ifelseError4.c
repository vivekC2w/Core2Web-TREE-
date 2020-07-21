
#include<stdio.h>

void main() {

	int a = 20;
	if(a == 10) {

		printf("a is 10\n");

	}else(a > 10) {

		printf("a is greater\n");

	}

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/1jun$ cc ifelseError4.c
ifelseError4.c: In function ‘main’:
ifelseError4.c:11:15: error: expected ‘;’ before ‘{’ token
   11 |  }else(a > 10) {
      |               ^~
      |               ;
 */
