

#include <stdio.h>

void main() {

	int num, len = 0;
	printf("Enter Number :");
	scanf("%d",&num);
	int dup = num;
	while(num!=0) {

		num/=10;
		len++;

	}

	printf("Length of %d is %d :\n",dup, len);

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/LogicBulding/11Aug$ cc Numlen.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/LogicBulding/11Aug$ ./a.out 
Enter Number :987654321
Length of 987654321 is 9 :
vivek@vivek-HIRAY:~/Core2Web-TREE-/LogicBulding/11Aug$ ./a.out 
Enter Number :456123
Length of 456123 is 6 :
vivek@vivek-HIRAY:~/Core2Web-TREE-/LogicBulding/11Aug$ ./a.out 
Enter Number :1234
Length of 1234 is 4 :
vivek@vivek-HIRAY:~/Core2Web-TREE-/LogicBulding/11Aug$ ./a.out 
Enter Number :0
Length of 0 is 0 :
 */
