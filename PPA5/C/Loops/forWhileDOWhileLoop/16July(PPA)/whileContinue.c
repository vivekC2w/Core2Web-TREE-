

#include<stdio.h>

void main() {

	int i = 1;
	while(i<=10) {
		if(i%2==0){
			i++;
			continue;
		}else{
			printf("Odd Number:%d\n",i);
			i++;
		}
			
		

	}

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Loops/forWhileDOWhileLoop/16July(PPA)$ cc whileContinue.c 
vivek@vivek-HIRAY:~/PPA5/C/Loops/forWhileDOWhileLoop/16July(PPA)$ ./a.out 
Odd Number:1
Odd Number:3
Odd Number:5
Odd Number:7
Odd Number:9
 */
