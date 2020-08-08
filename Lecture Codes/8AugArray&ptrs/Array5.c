
#include <stdio.h>

void main() {

        int jerNo[] = {18, 7, 45, 12, 10};
        float avg[] = {48.52, 55.40, 45.01, 50.07};
        int runs[5] = {1};

        int x = 10, y = 20;

        printf("%d\n",jerNo[3]);                //4th element from array jerNo

        printf("%f\n",avg[2]);                  //3rd element from array avg = 45.009998

        printf("%d\n",runs[2]);                 //when atleast one value is declared in array then undeclared elements prints '0' bydefault  

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/Lecture Codes/8AugArray&ptrs$ cc Array5.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/Lecture Codes/8AugArray&ptrs$ ./a.out 
12
45.009998
0
vivek@vivek-HIRAY:~/Core2Web-TREE-/Lecture Codes/8AugArray&ptrs$ ./a.out 
12
45.009998
0
vivek@vivek-HIRAY:~/Core2Web-TREE-/Lecture Codes/8AugArray&ptrs$ ./a.out 
12
45.009998
0
 */
