

#include<stdio.h>
#define L 10

void main() {

        auto money = 10;

        switch(money, money*2) {

                case L : printf("Willian\n");
			 break;
                case L*2 : printf("Warren\n");
			   break;
                case L*3 : printf("Carlos\n");
			   break;
                default : printf("Lawrence\n");
		case L*4 : printf("Inqvar\n");
			   break;

        }

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/22July$ cc prog5.c 
prog5.c: In function ‘main’:
prog5.c:8:14: warning: type defaults to ‘int’ in declaration of ‘money’ [-Wimplicit-int]
    8 |         auto money = 10;
      |              ^~~~~
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/22July$ ./a.out 
Warren
 */
