extern int printf(const char*,...);

void main() {

	printf("shashi\n");
	//printf();

}

/*
o/p=error
demo1.c: In function ‘main’:
demo1.c:6:2: error: too few arguments to function ‘printf’
    6 |  printf();
      |  ^~~~~~
demo1.c:1:12: note: declared here
    1 | extern int printf(const char*,...);
      |            ^~~~~~

output without Error=
vivek@vivek-HIRAY:~/c/Datatypes$ cc demo1.c
vivek@vivek-HIRAY:~/c/Datatypes$ ./a.out
shashi

*/
