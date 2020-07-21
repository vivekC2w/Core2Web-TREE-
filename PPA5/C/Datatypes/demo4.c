#include<stdio.h>

void main() {

	int price = 1000;
	char Tshirt_Grade = 'A';
	float Movie_Ticket = 315.15;
	double No_Of_Shops = 25;

	int cnt1 = printf("%ld\n",sizeof(price));
	int cnt2 = printf("%ld\n",sizeof(Tshirt_Grade));
	int cnt3 = printf("%ld\n",sizeof(Movie_Ticket));
	int cnt4 = printf("%ld\n",sizeof(No_Of_Shops));

	printf("%d\n",price);
	printf("%c\n",Tshirt_Grade);
	printf("%f\n",Movie_Ticket);
	printf("%lf\n",No_Of_Shops);


	printf("%d\n",cnt1);
	printf("%d\n",cnt2);
	printf("%d\n",cnt3);
	printf("%d\n",cnt4);

}

/*
vivek@vivek-HIRAY:~/c/Datatypes$ cc demo4.c
vivek@vivek-HIRAY:~/c/Datatypes$ ./a.out
4
1
4
8
1000
A
315.149994
25.000000
2
2
2
2
 */
