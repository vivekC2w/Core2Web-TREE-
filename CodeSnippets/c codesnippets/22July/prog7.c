
#include<stdio.h>
void main() {

        switch(*(1+"AB" "CD"+1)) {

                case 'A' : printf("Pilp Fiction\n");
			   break;
                case 'B' : printf("12 Angry Man\n");
                           break;
                case 'C' : printf("Casabance\n");
                           break;
                case 'D' : printf("Blood Diamond\n");
            
        }

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/22July$ cc prog7.c 
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/c codesnippets/22July$ ./a.out 
Casabance
 */
