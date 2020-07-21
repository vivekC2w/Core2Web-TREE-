

#include<stdio.h>

void main() {

	for(int i=1; i<=10; i++) {

		if(i%2==0)
			continue;
		else
			printf("Odd Numbers: %d\n",i);

	}

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Loops/forWhileDOWhileLoop/16July(PPA)$ cc forContinue.c 
vivek@vivek-HIRAY:~/PPA5/C/Loops/forWhileDOWhileLoop/16July(PPA)$ ./a.out 
Odd Numbers: 1
Odd Numbers: 3
Odd Numbers: 5
Odd Numbers: 7
Odd Numbers: 9
 */
