
#include<stdio.h>

int main() {

	int x = 2;

	switch(x << (x+1)) {                 	//switch(2 << 3)   
					     	//switch(16)
		default :			//default will execute
			printf("default\n");	//there is no break statement
						//so it will execute case 1 statement
		case 1:
			printf("1\n");		//1
			break;
		case 2:
			printf("\n2");
			break;
		case 3:
			printf("\n3");
			break;
		case 4:
			printf("\n4");
			break;
		case 8:
			printf("\n8");
			break;

	}
	return 0;

}
/*
vivek@vivek-HIRAY:~/Desktop/SwitchAssignment$ cc switchAssign4.c
vivek@vivek-HIRAY:~/Desktop/SwitchAssignment$ ./a.out 
default
1
 */
