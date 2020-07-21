
#include<stdio.h>

void main() {

	int a = 10;

	switch(a) {

		case 5+5 :{
				int x = 10;
				int y = 20;
				printf("%d\n",x+y);

			}
		
		case 6+4 :{
				int x = 10;
				int y = 20;
				printf("%d\n",x-y);

			}

		case 10 :{
				 
				 printf("10\n");

			}

	}

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/2july$ cc switchStatement19.c
switchStatement19.c: In function ‘main’:
switchStatement19.c:17:3: error: duplicate case value
   17 |   case 6+4 :{
      |   ^~~~
switchStatement19.c:10:3: note: previously used here
   10 |   case 5+5 :{
      |   ^~~~
switchStatement19.c:24:3: error: duplicate case value
   24 |   case 10 :{
      |   ^~~~
switchStatement19.c:10:3: note: previously used here
   10 |   case 5+5 :{
      |   ^~~~
 */


