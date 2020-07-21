

#include<stdio.h>

void main() {

	int a,b,ans;					//using ans variable

	printf("Enter Values of a and b : \n");
	scanf("%d %d",&a,&b);
	ans = a + b;

	printf("Addition of a and b :%d\n",ans);

	printf("Enter Values of a and b : \n");
	scanf("%d %d",&a,&b);
	ans = a - b;

	printf("Substraction of a and b :%d\n",ans);

	printf("Enter Values of a and b : \n");
	scanf("%d %d",&a,&b);
	ans = a * b;

	printf("Multiplication of a and b :%d\n",ans);

	printf("Enter Values of a and b : \n");
	scanf("%d %d",&a,&b);
	ans = a / b;

	printf("Division of a and b :%d\n",ans);

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/6july$ cc scanfDemo5.c
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/6july$ ./a.out 
Enter Values of a and b : 
10
20
Addition of a and b :30
Enter Values of a and b : 
20
10
Substraction of a and b :10
Enter Values of a and b : 
20
10
Multiplication of a and b :200
Enter Values of a and b : 
20
10
Division of a and b :2
 */

