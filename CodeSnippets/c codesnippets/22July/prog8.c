

#include<stdio.h>

void main() {

	char * str = "ONE";
	str++;
	switch(str){
		case "ONE" : printf("Brazil\n");
			     break;
		case "NE" : printf("Toy STory\n");
			     break;
		case "N" : printf("His Girl Friday\n");
			     break;
		case "E" : printf("Casino Roya;\n");
			   
	}
}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/22July$ cc prog8.c
prog8.c: In function ‘main’:
prog8.c:9:9: error: switch quantity not an integer
    9 |  switch(str){
      |         ^~~
prog8.c:10:3: error: case label does not reduce to an integer constant
   10 |   case "ONE" : printf("Brazil\n");
      |   ^~~~
prog8.c:12:3: error: case label does not reduce to an integer constant
   12 |   case "NE" : printf("Toy STory\n");
      |   ^~~~
prog8.c:14:3: error: case label does not reduce to an integer constant
   14 |   case "N" : printf("His Girl Friday\n");
      |   ^~~~
prog8.c:16:3: error: case label does not reduce to an integer constant
   16 |   case "E" : printf("Casino Roya;\n");
 */
