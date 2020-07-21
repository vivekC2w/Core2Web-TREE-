

#include<stdio.h>

void main() {

	float val;

	printf("Enter Float Value :\n");
	scanf("%d",&val);

	printf("%f\n",val);

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/scanf(ipFromUser)/7July$ cc floatDemo1.c
floatDemo1.c: In function ‘main’:
floatDemo1.c:10:10: warning: format ‘%d’ expects argument of type ‘int *’, but argument 2 has type ‘float *’ [-Wformat=]
   10 |  scanf("%d",&val);
      |         ~^  ~~~~
      |          |  |
      |          |  float *
      |          int *
      |         %e
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/scanf(ipFromUser)/7July$ ./a.out 
Enter Float Value :
20.5
0.000000
*/
