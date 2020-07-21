

#include<stdio.h>

void main() {

	int x, y;
	char ch;

	printf("Enter Two Values : \n");
	scanf("%d %d",&x,&y);

	printf("Enter operator :\n");
	scanf("%c",&ch);

	if(x ch y)
		printf("x is greater\n");

	printf("Out of if\n");

}
/*
 vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/scanf(ipFromUser)/8July(PPA)$ cc ifDemo1.c
ifDemo1.c: In function ‘main’:
ifDemo1.c:16:6: error: expected ‘)’ before ‘ch’
   16 |  if(x ch y)
      |    ~ ^~~
      |      )
 */
