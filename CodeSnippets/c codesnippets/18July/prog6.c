
#include<stdio.h>

void main() {

        int a = 2;
	
	switch(a) 

                case 1 :
                        printf("%d",a);

                case 2 :
                        printf("%d",a);

                default :
                        printf("%d",a);
                        break;

        

}
/*
vivek@vivek-HIRAY:~/Desktop/CodeSnippets/c codesnippets/18July$ cc prog6.c 
prog6.c: In function ‘main’:
prog6.c:13:17: error: case label not within a switch statement
   13 |                 case 2 :
      |                 ^~~~
prog6.c:16:17: error: ‘default’ label not within a switch statement
   16 |                 default :
      |                 ^~~~~~~
prog6.c:18:25: error: break statement not within loop or switch
   18 |                         break;
      |                         ^~~~~
 */
