
#include<stdio.h>

void main() {

	int a = 1, b = 2, c = 1, ans = 0;
	ans = ++a + ++a + a++;
	printf("%d %d\n",a,ans);
	ans = a++ + ++b;
	printf("%d %d %d\n",a,b,ans);
	ans = ++c + c++ + a++;
	printf("%d %d %d\n",a,c,ans);



}
