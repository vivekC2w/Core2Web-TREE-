

class Core2web {

        public static void main(String[] args) {

		int var = 2;
                System.out.println(true == (13!=4) ? var+=4 : var*=4);
		/*Ternary operator (?) cannot be used with multilayer conditions like 'true == (13!=4)'*/
        }

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/javaSnippets/10Aug$ javac cs10.java 
cs10.java:8: error: unexpected type
                System.out.println(true == (13!=4) ? var+=4 : var*=4);
                                                   ^
  required: variable
  found:    value
1 error
 */
