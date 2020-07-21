#include<stdio.h>

void main() {

	int a = 10, b = 20, c = 30, d = 40, ans1, ans2, ans3, ans4;
	ans1 = a++;
	ans2 = ++b;
	ans3 = c--;
	ans4 = --d;
	printf("%d\n",ans1);
	printf("%d\n",ans2);
	printf("%d\n",ans3);
	printf("%d\n",ans4);

}

