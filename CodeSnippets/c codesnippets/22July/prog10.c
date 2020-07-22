
#include<stdio.h>
void main() {

        switch(5||2|1) {

                case 3&2 : printf("Anatomy of Murder\n");
			   break;
                case -~11 : printf("Planet of apes\n");
                           break;
                case 6-3<<2 : printf("The conversation\n");
                           break;
                case 5>=5 : printf("Shaun of the dead\n");
            
        }

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/22July$ cc prog10.c
prog10.c: In function ‘main’:
prog10.c:11:17: error: duplicate case value
   11 |                 case 6-3<<2 : printf("The conversation\n");
      |                 ^~~~
prog10.c:9:17: note: previously used here
    9 |                 case -~11 : printf("Planet of apes\n");
      |                 ^~~~
 */

