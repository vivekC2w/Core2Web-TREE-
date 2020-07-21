

#include<stdio.h>

void main() {

	int eng, mar, chem, bio, maths;
	int total_marks;
       	printf("Please Enter Your Marks :\n");
	
	printf("Marks in English outof 100:\n");
	scanf("%d",&eng);	
	printf("Marks in Marathi outof 100:\n");
	scanf("%d",&mar);
	printf("Marks in Chemistry outof 100:\n");
	scanf("%d",&chem);	
	printf("Marks in Biology outof 100:\n");
	scanf("%d",&bio);	
	printf("Marks in Maths outof 100:\n");
	scanf("%d",&maths);

	if(eng >= 35 && mar >= 35 && chem >= 35 && bio >= 35 && maths >= 35) {    //passing condition 
		
		total_marks = eng + mar + chem + bio + maths;
		
		switch(1) {
			
			case 1:
				switch(total_marks > 400 && total_marks <= 500) {
					
					case 0:
						break;

					case 1:
						printf("Congratulations You got First Class\n");
						break;

				}

				switch(total_marks >300 && total_marks <= 400) {

					case 0:
						break;

					case 1:
						printf("Congratulations You got Second Class\n");
						break;

				}

				break;

			default:

				printf("You Passed In Examination...");
				break;

		}

	}else {

		printf("You Failed in Exam...\n");

	}


}
/*
vivek@vivek-HIRAY:~/Desktop/SwitchAssignment$ cc switchAssign7.c
vivek@vivek-HIRAY:~/Desktop/SwitchAssignment$ ./a.out 
Please Enter Your Marks :
Marks in English outof 100:
80
Marks in Marathi outof 100:
80
Marks in Chemistry outof 100:
80
Marks in Biology outof 100:
80
Marks in Maths outof 100:
80
Congratulations You got Second Class
vivek@vivek-HIRAY:~/Desktop/SwitchAssignment$ ./a.out 
Please Enter Your Marks :
Marks in English outof 100:
65
Marks in Marathi outof 100:
70
Marks in Chemistry outof 100:
45
Marks in Biology outof 100:
33
Marks in Maths outof 100:
50
You Failed in Exam...
vivek@vivek-HIRAY:~/Desktop/SwitchAssignment$ ./a.out 
Please Enter Your Marks :
Marks in English outof 100:
90
Marks in Marathi outof 100:
85
Marks in Chemistry outof 100:
90
Marks in Biology outof 100:
85
Marks in Maths outof 100:
90
Congratulations You got First Class
 */
