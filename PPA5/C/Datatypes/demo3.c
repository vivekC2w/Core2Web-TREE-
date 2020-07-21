#include<stdio.h>

void main() {

	int a;
	int b=10;
	printf("%p\n",&a);
	printf("%p\n",&b);
	printf("%d\n",a);
	printf("%d\n",b);

}
/*
vivek@vivek-HIRAY:~/c/Datatypes$ cc demo3.c
vivek@vivek-HIRAY:~/c/Datatypes$ ./a.out
0x7ffee7523250
0x7ffee7523254
-414043328                //garbage value of a
10
vivek@vivek-HIRAY:~/c/Datatypes$ ./a.out
0x7ffc472c7100
0x7ffc472c7104
1194095088		//garbage value of a
10
vivek@vivek-HIRAY:~/c/Datatypes$ ./a.out
0x7ffe474832c0
0x7ffe474832c4
1195914160		//garbage value of a
10

*/
