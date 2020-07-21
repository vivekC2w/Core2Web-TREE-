#include<stdio.h>

void main() {

	int a, b, ans, ans1, ans2;
	printf("Enter the value of a:");
	scanf("%d",&a);   
	printf("Enter the value of b:");
	scanf("%d",&b);
     	ans = a && b;
	ans1 = a || b;
	ans2 = !a;
	printf("%d\n",ans);
	printf("%d\n",ans1);
	printf("%d\n",ans2);

}
/*
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ cc prog5.c 
vivek@vivek-HIRAY:~/PPA5/C/operator/Bitwise/Demo assign$ ./a.out 
Enter the value of a:0
Enter the value of b:1
ans  = 0
ans1 = 1
ans2 = 1
 */
