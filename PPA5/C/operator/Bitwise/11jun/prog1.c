#include<stdio.h>

void main() {

	int x = 10, y = 15, ans = 0;

	ans = x & y;
	//  = 1010
	//  & 1111
	//  = 1010 = 10

	printf("%d\n",ans);//10

}
