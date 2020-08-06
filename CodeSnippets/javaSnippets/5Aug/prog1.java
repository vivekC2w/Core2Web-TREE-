

class Core2web {

	static int var = 2;
	public static void main(String[] args) {

		var = (var=4)*(++var);
		System.out.println(var);

	}

}
/*vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/javaSnippets/5Aug$ javac prog1.java 
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/javaSnippets/5Aug$ java Core2web 
20
*/
