

#include<stdio.h>

void main() {

	int i = 1;

	while(i <= 100) {

		if(i%5==0 && i%15==0) { 
			printf("Number Divisible by 5 and 15 :%d\n",i);
			i++;
		}else{
			i++;
			continue;
		}

	}

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Loops/forWhileDOWhileLoop/16July(PPA)$ cc whileContinue1.c
vivek@vivek-HIRAY:~/PPA5/C/Loops/forWhileDOWhileLoop/16July(PPA)$ ./a.out 
Number Divisible by 5 and 15 :15
Number Divisible by 5 and 15 :30
Number Divisible by 5 and 15 :45
Number Divisible by 5 and 15 :60
Number Divisible by 5 and 15 :75
Number Divisible by 5 and 15 :90
 */
