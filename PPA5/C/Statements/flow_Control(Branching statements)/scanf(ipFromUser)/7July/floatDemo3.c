

#include<stdio.h>

void main() {

        float val;

        printf("Enter Float Value :\n");
        scanf("%f",&val);

        printf("%d\n",val);

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/scanf(ipFromUser)/7July$ cc floatDemo3.c
floatDemo3.c: In function ‘main’:
floatDemo3.c:12:18: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘double’ [-Wformat=]
   12 |         printf("%d\n",val);
      |                 ~^    ~~~
      |                  |    |
      |                  int  double
      |                 %f
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/scanf(ipFromUser)/7July$ ./a.out 
Enter Float Value :
20.5
1101266944
 */
