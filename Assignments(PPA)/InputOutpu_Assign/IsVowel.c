

#include<stdio.h>

void main() {

	char ch;
	printf("Enter a Character: ");
	scanf("%c",&ch);

	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {

		printf("Ouput : %c is a vowel\n",ch);

	}else {

		printf("Ouput : %c is not a vowel\n",ch);

	}

}
/*
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/InputOutpu_Assign$ cc IsVowel.c
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/InputOutpu_Assign$ ./a.out 
Enter a Character: s
Ouput : s is not a vowel
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/InputOutpu_Assign$ ./a.out 
Enter a Character: q
Ouput : q is not a vowel
vivek@vivek-HIRAY:~/Desktop/Assignments(PPA)/InputOutpu_Assign$ ./a.out 
Enter a Character: a
Ouput : a is a vowel
 */
