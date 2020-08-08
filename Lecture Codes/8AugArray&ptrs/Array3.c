



#include <stdio.h>

void main() {

        int jerNo[5] = {18, 7, 45, 12, 10};     //Array_Size = 5 * 4 = 20 bytes
        float avg[5] = {49.90, 54.30, 45.50, 47.54, 50.52};
        char player[5];

	int x = 10;

	printf("size of x = %ld\n", sizeof(x));
	printf("size of jerNo = %ld\n", sizeof(jerNo));
	printf("size of avg = %ld\n", sizeof(avg));
	printf("size of player = %ld\n", sizeof(player));

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Lecture Codes/8AugArray&ptrs$ cc Array3.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Lecture Codes/8AugArray&ptrs$ ./a.out 
size of x = 4
size of jerNo = 20
size of avg = 20
size of player = 5
 */
