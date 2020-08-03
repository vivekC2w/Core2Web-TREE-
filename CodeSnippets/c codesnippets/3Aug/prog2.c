

#include<stdio.h>

int main() {

	int max = 5;
	int i = 0;
	for(;;) {
		i++;
		if(i>max)
			break;
		printf("i = %d\n",i);
	}
	return 0;

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/3Aug$ cc prog2.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/3Aug$ ./a.out 
i = 1
i = 2
i = 3
i = 4
i = 5
 */

