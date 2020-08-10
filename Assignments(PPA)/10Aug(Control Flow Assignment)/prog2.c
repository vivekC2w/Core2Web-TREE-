

#include <stdio.h>

void main() {

	char choice, ch;

	printf("Which Type of Vehicle You have?\n");
	printf("a.Car\n");
	printf("b.Transport Vehicles like Trucks\n");
	printf("c.Bike\n");

	scanf("%c",&choice);
	switch(choice) {

		case 'a':
			printf("car is From Native place or outside (N/O)?\n");
			scanf(" %c",&ch);

			switch(ch) {

				case 'N':
					printf("Toll Charges : 50rs\n");
					break;

				case 'O':
					printf("Toll Charges : 100rs\n");
					break;

			}
			break;

		case 'b':
			printf("Toll Charges : 150rs\n");
			break;

		case 'c':
			printf("No Toll Charges\n");
			break;

	}

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Assignments(PPA)/10Aug(Control Flow Assignment)$ cc prog2.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Assignments(PPA)/10Aug(Control Flow Assignment)$ ./a.out 
Which Type of Vehicle You have?
a.Car
b.Transport Vehicles like Trucks
c.Bike
a
car is From Native place or outside (N/O)?
N
Toll Charges : 50rs
vivek@vivek-HIRAY:~/Core2Web-TREE-/Assignments(PPA)/10Aug(Control Flow Assignment)$ ./a.out 
Which Type of Vehicle You have?
a.Car
b.Transport Vehicles like Trucks
c.Bike
a
car is From Native place or outside (N/O)?
O
Toll Charges : 100rs
vivek@vivek-HIRAY:~/Core2Web-TREE-/Assignments(PPA)/10Aug(Control Flow Assignment)$ ./a.out 
Which Type of Vehicle You have?
a.Car
b.Transport Vehicles like Trucks
c.Bike
b
Toll Charges : 150rs
vivek@vivek-HIRAY:~/Core2Web-TREE-/Assignments(PPA)/10Aug(Control Flow Assignment)$ ./a.out 
Which Type of Vehicle You have?
a.Car
b.Transport Vehicles like Trucks
c.Bike
c
No Toll Charges
 */

