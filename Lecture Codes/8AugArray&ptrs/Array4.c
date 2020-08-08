

#include <stdio.h>

void main() {

	int jerNo[] = {18, 7, 45, 12, 10};
	float avg[] = {48.52, 55.40, 45.01, 50.07};
	int runs[5];				//It uses local variable concept

	int x = 10, y = 20;

	printf("%d\n",jerNo[3]);		//4th element from array jerNo

	printf("%f\n",avg[2]);			//3rd element from array avg = 45.009998

	printf("%d\n",runs[2]);			//garbage value  

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Lecture Codes/8AugArray&ptrs$ cc Array4.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Lecture Codes/8AugArray&ptrs$ ./a.out 
12
45.009998
-1477098928
vivek@vivek-HIRAY:~/Core2Web-TREE-/Lecture Codes/8AugArray&ptrs$ ./a.out 
12
45.009998
1402737232
vivek@vivek-HIRAY:~/Core2Web-TREE-/Lecture Codes/8AugArray&ptrs$ ./a.out 
12
45.009998
852324944
vivek@vivek-HIRAY:~/Core2Web-TREE-/Lecture Codes/8AugArray&ptrs$ ./a.out 
12
45.009998
-1300954544
vivek@vivek-HIRAY:~/Core2Web-TREE-/Lecture Codes/8AugArray&ptrs$ ./a.out 
12
45.009998
-411332016
vivek@vivek-HIRAY:~/Core2Web-TREE-/Lecture Codes/8AugArray&ptrs$ ./a.out 
12
45.009998
-355974576
 */

