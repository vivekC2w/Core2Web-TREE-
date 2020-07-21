

#include<stdio.h>

void main() {

	float val;

	printf("Enter Float Value :\n");
	scanf("%d",&val);

	printf("%d\n",val);

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/scanf(ipFromUser)/7July$ cc floatDemo2.c
floatDemo2.c: In function ‘main’:
floatDemo2.c:10:10: warning: format ‘%d’ expects argument of type ‘int *’, but argument 2 has type ‘float *’ [-Wformat=]
   10 |  scanf("%d",&val);
      |         ~^  ~~~~
      |          |  |
      |          |  float *
      |          int *
      |         %e
floatDemo2.c:12:11: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘double’ [-Wformat=]
   12 |  printf("%d\n",val);
      |          ~^    ~~~
      |           |    |
      |           int  double
      |          %f
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/scanf(ipFromUser)/7July$ ./a.out 
Enter Float Value :
20.5
0
*/
