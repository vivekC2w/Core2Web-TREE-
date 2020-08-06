

#include <stdio.h>

void main() {

	char agree;

	do {

		int ch = 0;

		printf("Welcome\n");
		printf("1: Shopping\n");
		printf("2: PVR\n");
		printf("3: PlayStation\n");
		printf("4: Food Court\n");
		
		printf("Enter Yout Choice : ");
		scanf("%d",&ch);

		switch(ch) {

			case 1 :
				printf("Wrogn, LP\n");
				break;

			case 2:
				printf("Panipat\n");
				break;

			case 3:
				printf("FootBall\n");
				break;

			case 4:
				printf("Binyani\n");
				break;

			default :
				printf("Wrong Choice");
				break;

		}

		printf("Do you want to continue? \n");
		scanf(" %c",&agree);

	}while(agree == 'y' || agree == 'Y');

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Lecture Codes/5July_doWhile$ cc prog5.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Lecture Codes/5July_doWhile$ ./a.out 
Welcome
1: Shopping
2: PVR
3: PlayStation
4: Food Court
Enter Yout Choice : 1
Wrogn, LP
Do you want to continue? 
y
Welcome
1: Shopping
2: PVR
3: PlayStation
4: Food Court
Enter Yout Choice : 3
FootBall
Do you want to continue? 
Y
Welcome
1: Shopping
2: PVR
3: PlayStation
4: Food Court
Enter Yout Choice : 4
Binyani
Do you want to continue? 
y
Welcome
1: Shopping
2: PVR
3: PlayStation
4: Food Court
Enter Yout Choice : 2
Panipat
Do you want to continue? 
n
 */
