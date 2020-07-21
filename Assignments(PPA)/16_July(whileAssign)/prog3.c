

#include<stdio.h>

void main(void) {

	float Fahrenheit, celcius;
	printf("Temprature in Fahrenheit between 0 to 100 degree :");
	scanf("%f",&Fahrenheit);

	celcius = (Fahrenheit - 32)*5/9;

	printf("%.2f Fahrenheit temp in celcius :%.2f\n",Fahrenheit,celcius);


}
/*
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/16_July(whileAssign)$ cc prog3.c
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/16_July(whileAssign)$ ./a.out 
Temprature in Fahrenheit between 0 to 100 degree :98.6
98.60 Fahrenheit temp in celcius :37.00
 */

