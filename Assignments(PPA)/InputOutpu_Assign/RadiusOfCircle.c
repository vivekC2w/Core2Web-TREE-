

#include<stdio.h>

void main() {

	int radius;
	float area, circumference;
        
	printf("Input : Radius : ");
	scanf("%d",&radius);
	
	area = 3.14 * radius * radius;
        circumference = 2 * 3.14 * radius;

	printf("Output :\n");
	printf("Area of Circle :%.2f \n",area);
	printf("Circumference of Circle :%.2f \n",circumference);

}
/*
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/InputOutpu_Assign$ cc RadiusOfCircle.c 
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/InputOutpu_Assign$ ./a.out 
Input : Radius : 4
Output :
Area of Circle :50.24 
Circumference of Circle :25.12 
 */
