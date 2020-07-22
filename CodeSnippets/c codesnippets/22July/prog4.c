

#include<stdio.h>

void main() {

	int movie = 1;

	switch(movie<<2+movie) {
		
		default : printf("3 Idiots\n");
		case 4 : printf("Ghajani\n");
		case 5 : printf("Krrish\n");
		case 8 : printf("Race\n");
		
	}

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/22July$ cc prog4.c
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/22July$ ./a.out 
Race
 */
