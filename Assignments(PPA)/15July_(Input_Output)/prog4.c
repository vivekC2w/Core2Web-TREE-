
#include<stdio.h>

void main() {

	int num, cnt = 0;
	printf("Input :");
	scanf("%d",&num);
	
	for(int i=1; i<=num; i++) {

		if(num%i==0) {

			cnt+=1;

		}

	}
	if(cnt==2) {

		printf("%d is a prime Number\n",num);

	}else {

		printf("%d is not prime Number\n",num);

	}


}
/*
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/15July_(Input_Output)$ cc prog4.c
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/15July_(Input_Output)$ ./a.out 
Input :5   
5 is a prime Number
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/15July_(Input_Output)$ ./a.out 
Input :6
6 is not prime Number
 */		
