

#include<stdio.h>

void main(void) {

	float i = 0.0f;
	float j = 0.0f;

	printf("i \t j\n");

	for(int num=0; num<10; num++, i+=0.20, j-=0.20) {

		printf("%.2f \t %.2f\n",i,j);
		//i = i + 0.20;
		//j = j - 0.20;

	}

}
/*
vivek@vivek-HIRAY:~/Desktop/LogicBulding$ cc 14JulyProg2.c
vivek@vivek-HIRAY:~/Desktop/LogicBulding$ ./a.out 
i 	 j
0.00 	 0.00
0.20 	 -0.20
0.40 	 -0.40
0.60 	 -0.60
0.80 	 -0.80
1.00 	 -1.00
1.20 	 -1.20
1.40 	 -1.40
1.60 	 -1.60
1.80 	 -1.80
 */
