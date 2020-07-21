

#include<stdio.h>

void main() {

        int x, y;
        char ch = '>';

        printf("Enter Two Values : \n");
        scanf("%d %d",&x,&y);

        printf("Enter operator :\n");
        scanf("%c",&ch);

        if(x (ch) y)
                printf("x is greater\n");

        printf("Out of if\n");

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/scanf(ipFromUser)/8July(PPA)$ cc ifDemo2.c
ifDemo2.c: In function ‘main’:
ifDemo2.c:16:12: error: called object ‘x’ is not a function or function pointer
   16 |         if(x (ch) y)
      |            ^
ifDemo2.c:7:13: note: declared here
    7 |         int x, y;
      |             ^
ifDemo2.c:16:18: error: expected ‘)’ before ‘y’
   16 |         if(x (ch) y)
      |           ~      ^~
      |                  )
 */
