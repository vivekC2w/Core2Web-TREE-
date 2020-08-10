
#include <stdio.h>

void main() {

	int fn, ln, num;
	printf("Enter start: ");
	scanf("%d",&fn);
	printf("Enter end: ");
	scanf("%d",&ln);

	int i = fn;

	while(i<ln) {
		
		int sum = 0;
		num = i;

		while(num!=0) {
			int rem = num % 10;
			sum = sum*10 + rem;
			num = num / 10;
		}
		if(sum == i) {
			
			printf("%d ",i);
		}
		i++;
	}
}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Assignments(PPA)/10Aug(Control Flow Assignment)$ cc prog4.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Assignments(PPA)/10Aug(Control Flow Assignment)$ ./a.out 
Enter start: 100
Enter end: 200
101 111 121 131 141 151 161 171 181 191 */
