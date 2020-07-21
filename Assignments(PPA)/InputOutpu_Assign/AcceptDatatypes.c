

#include<stdio.h>

void main() {

	int i;
	float f;
	char ch;
	double d;

	printf("Input : Enter an integer value:");
	scanf("%d",&i);
	printf("Output : Entered Integer Value is %d\n",i);

	printf("Input : Enter an Float value:");
	scanf("%f",&f);
	printf("Output : Entered Float Value is %.2f\n",f);

	printf("Input : Enter a Character:");
	scanf(" %c",&ch);
	printf("Output : Entered Character is %c\n",ch);

	printf("Input : Enter an Double value:");
	scanf("%lf",&d);
	printf("Output : Entered Double Value is %.4lf\n",d);

}
/*
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/InputOutpu_Assign$ cc AcceptDatatypes.c
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/InputOutpu_Assign$ ./a.out 
Input : Enter an integer value:2
Output : Entered Integer Value is 2
Input : Enter an Float value:2.5
Output : Entered Float Value is 2.50
Input : Enter a Character:a
Output : Entered Character is a
Input : Enter an Double value:5.4516453
Output : Entered Double Value is 5.4516
 */
