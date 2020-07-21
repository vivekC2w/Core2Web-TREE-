

#include<stdio.h>

void main() {

        int x;
        float f;
        char ch;

        printf("Enter Value Of Character:\n");
	scanf("%c",&ch);			//ch = A

        printf("Enter Value Of Integer:\n");
        scanf("%d",&x);                         //x = 10\n

        printf("Enter Value Of Float:\n");
        scanf("%f",&f);                         //f = 20.5\n

        printf("Integer Value : %d\n",x);
        printf("Float Value : %f\n",f);
        printf("Character Value : %c\n",ch);

}
/*
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/scanf(ipFromUser)/7July$ cc charDemo4.c
vivek@vivek-HIRAY:~/PPA5/C/Statements/flow_Control(Branching statements)/scanf(ipFromUser)/7July$ ./a.out 
Enter Value Of Character:
A
Enter Value Of Integer:
10
Enter Value Of Float:
20.5
Integer Value : 10
Float Value : 20.500000
Character Value : A
 */
