
#include<stdio.h>

void main() {

	float f1, f2, f3;

	printf("Enter First number f1 :\n");		//10
	scanf("%f",&f1);
	printf("Enter Second number f2 :\n");		//20
	scanf("%f",&f2);
	printf("Enter Third number f3 :\n");		//30
	scanf("%f",&f3);

	if(f1 >= f2 && f1 >= f3) {			//if(10>=20 && 10>=30)
							//if(0)
		printf("Largest number: %.2f\n",f1);	

	}
	if(f2 >= f1 && f2 >= f3) {			//if(20>=10 && 20>=30)
							//if(0)
		printf("Largest number: %.2f\n",f2);

	}
	if(f3 >= f1 && f3 >= f2) {			//if(30>=10 && 30>=20)
							//if(1)
		printf("Largest number: %.2f\n",f3);	//Largest number: 30.00

	}

}

/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun/ifelseStateAssign$ cc ifelse13.c
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/30jun/ifelseStateAssign$ ./a.out 
Enter First number f1 :
10
Enter Second number f2 :
20
Enter Third number f3 :
30
Largest number: 30.00
 */
