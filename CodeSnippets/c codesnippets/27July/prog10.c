

#include<stdio.h>

void main() {

        int pt1, pt2, pt3, pt4, pt5;
	int val;

        printf("Points for pt1, pt2, pt3, pt4, pt5\n");
	scanf("%d, %d, %d, %d, %d""&pt1, &pt2, &pt3, &pt4, &pt5");
        val = pt1+pt2+pt3+pt4+pt5;
	printf("%f\n",val);

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/27July$ ./a.out 
Points for pt1, pt2, pt3, pt4, pt5
5 6 7 8 9 10 11        
0.000000
 */
