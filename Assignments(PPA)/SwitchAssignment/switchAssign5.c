

#include<stdio.h>

int main() {

	int a;
	//long int b = 2;
							// as sizeof() returns long and -1 is of integer type
	switch(a = (sizeof(int) > -1)) {		// switch(a = (long > int))
							// we are trying to compare two different 							  
							// data types so it returns 0 value
							// switch(a = 0)
		case 1:
			printf("True\n");
			break;

		case 0:
			printf("False\n");		//False
			break;

	}
	return 0;

}
