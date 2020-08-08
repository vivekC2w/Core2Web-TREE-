

#include <stdio.h>

void main() {

	int choice, cnt;
	printf("Which type of Burger You Want\n");
	printf("1. Veg\n");
        printf("2. Non-Veg\n");
	scanf("%d",&choice);

	if(choice == 1 || choice == 2 ) {
	
		printf("Options From Entered choice are \n");

	}else {

		printf("Invalid Input!!!!\n");

	}

	do {
		cnt = 0;
		if(choice == 1) {

			printf("Veg Blasts : \n");
			printf("a.Veggie Tikki Burger\n");
			printf("b.Aloo Tikki Burger\n");
			printf("c.Mushroom veggie cheese Burger\n");
			printf("d.Peanut Butter Sweet Burger\n");
			cnt++;

		}else if(choice == 2) {
			
			printf("Non-Veg Blasts : \n");
			printf("a.NonVeg Tikki Burger\n");
			printf("b.Jumbo Chicken Burger\n");
			printf("c.Grilled Chicken Tequila Burger\n");
			printf("d.Chicken Burgers with Crispy Cheddar Cheese\n");
			cnt++;

		}else {

			printf("You Entered wrong Input!!!\n");

		}

	}while(cnt<1);

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/7Aug$ cc cs4.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/7Aug$ ./a.out 
Which type of Burger You Want
1. Veg
2. Non-Veg
1
Options From Entered choice are 
Veg Blasts : 
a.Veggie Tikki Burger
b.Aloo Tikki Burger
c.Mushroom veggie cheese Burger
d.Peanut Butter Sweet Burger
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/7Aug$ ./a.out 
Which type of Burger You Want
1. Veg
2. Non-Veg
2
Options From Entered choice are 
Non-Veg Blasts : 
a.NonVeg Tikki Burger
b.Jumbo Chicken Burger
c.Grilled Chicken Tequila Burger
d.Chicken Burgers with Crispy Cheddar Cheese
 */
