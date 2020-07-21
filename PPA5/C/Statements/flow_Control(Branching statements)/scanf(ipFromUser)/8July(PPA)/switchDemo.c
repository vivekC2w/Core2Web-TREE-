

#include<stdio.h>

void main() {

	int x, y;
	int choice;

	printf("Enter value for x and y :\n");
	scanf("%d %d",&x, &y);

	printf("Enter Your Choice :\n");
	printf("1 : Addition\n");
	printf("2 : Substraction\n");
	printf("3 : Multiplication\n");
	printf("4 : Division\n");

	scanf("%d",&choice);

	switch(choice) {

		case 1:

			printf("Addition : %d\n",x+y);
			break;

		case 2:

			printf("Substraction : %d\n",x-y);
			break;

		case 3:

			printf("Multiplication : %d\n",x*y);
			break;

		case 4:

			printf("Division : %d\n",x/y);
			break;

		default:

			printf("wrong choice\n");
			break;

	}

	printf("Out of switch\n");

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/scanf(ipFromUser)/8July(PPA)$ cc switchDemo.c
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/scanf(ipFromUser)/8July(PPA)$ ./a.out 
Enter value for x and y :
20
10
Enter Your Choice :
1 : Addition
2 : Substraction
3 : Multiplication
4 : Division
1
Addition : 30
Out of switch
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/scanf(ipFromUser)/8July(PPA)$ ./a.out 
Enter value for x and y :
20
10
Enter Your Choice :
1 : Addition
2 : Substraction
3 : Multiplication
4 : Division
2
Substraction : 10
Out of switch
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/scanf(ipFromUser)/8July(PPA)$ ./a.out 
Enter value for x and y :
20
10
Enter Your Choice :
1 : Addition
2 : Substraction
3 : Multiplication
4 : Division
3
Multiplication : 200
Out of switch
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/scanf(ipFromUser)/8July(PPA)$ ./a.out 
Enter value for x and y :
20  
10
Enter Your Choice :
1 : Addition
2 : Substraction
3 : Multiplication
4 : Division
4
Division : 2
Out of switch
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/scanf(ipFromUser)/8July(PPA)$ ./a.out 
Enter value for x and y :
20
10
Enter Your Choice :
1 : Addition
2 : Substraction
3 : Multiplication
4 : Division
5
wrong choice
Out of switch
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/scanf(ipFromUser)/8July(PPA)$ 

 */

