

#include<stdio.h>

void main() {

	int cnt = 0;

	for(int i = 1; cnt < 5 ; i++) {

			if(i % 5 == 0) {
				
				printf("Natural Number divisible by 5: %d\n",i);
				cnt+=1;

			}else {

				continue;

			}
			
	}

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/LogicBulding/20July(For Loop Based)$ cc FirstNatural.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/LogicBulding/20July(For Loop Based)$ ./a.out 
Natural Number divisible by 5: 5
Natural Number divisible by 5: 10
Natural Number divisible by 5: 15
Natural Number divisible by 5: 20
Natural Number divisible by 5: 25
 */
