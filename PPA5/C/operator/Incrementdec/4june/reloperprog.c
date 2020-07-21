
#include<stdio.h>

void main() {

	int x = 5, y = 7, ans = 0;

	printf("X = %d\nY = %d\n",x,y);

	ans = x > y;
	printf("%d\n",ans);

	ans = x < y;
	printf("%d\n",ans);

	ans = x >= y;
	printf("%d\n",ans);

	ans = x <= y;
	printf("%d\n",ans);

	ans = x == y;
	printf("%d\n",ans);

	ans = x != y;
	printf("%d\n",ans);

}
/*
vek@vivek-HIRAY:~/PPA5/C/operator/Incrementdec/4june$ ./a.out 
X = 5
Y = 7
0
1
0
1
0
1
 */
