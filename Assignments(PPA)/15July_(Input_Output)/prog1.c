

#include<stdio.h>

void main() {

	double d1, d2;
       	printf("Output: \n");	
       	printf("First Double Value: \n");
	scanf("%lf",&d1);	
       	printf("Second Double Value: \n");
	scanf("%lf",&d2);

	printf("Output :\n");

	printf("Their Addition:%.2lf\n",d1+d2);
	printf("Their Substraction:%.2lf\n",d1-d2);
	printf("Their Multiplication:%.2lf\n",d1*d2);
	printf("Their Division:%.2lf\n",d1/d2);

	}	

/*
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/15July_(Input_Output)$ cc prog1.c 
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/15July_(Input_Output)$ ./a.out 
Output: 
First Double Value: 
12.745
Second Double Value: 
10.2229
Output :
Their Addition:22.97
Their Substraction:2.52
Their Multiplication:130.29
Their Division:1.25
 */
