

#include <stdio.h>

void main() {

	char ch = 'A';
	int a = 4;
	float f = 4.800f;
	double d = 125.345678;

	printf("Input : ");

	if(sizeof(ch)==1) {

		printf("Variable is of Char Datatype\n");

	}else if(sizeof(a)==4) {

		printf("Variable is of Intger or float Datatype\n");

	}else if(sizeof(f)==8) {

		printf("Variable is of long int or double Datatype\n");

	}

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Assignments(PPA)/10Aug(Control Flow Assignment)$ cc prog1.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Assignments(PPA)/10Aug(Control Flow Assignment)$ ./a.out 
Input : Variable is of Char Datatype

*/
