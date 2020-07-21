

#include<stdio.h>

void main() {

	for(int i = 0; i < 7; i++) {

		printf("%c %c ",'A'+i,'z'-i);

	}

}	
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/LogicBulding/21JulyFor$ cc prog1.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/LogicBulding/21JulyFor$ ./a.out 
A z B y C x D w E v F u G t 
*/
