

class Core2web {

	public static void main(String[] args) {

		int var1 = 23;
		double var2 = 23.5;
		boolean b = (var1 = var2);
		System.out.println(b);

	}

}
/*
vivek@vivek-HIRAY:~/Core2Web-TREE-/CodeSnippets/javaSnippets/5Aug$ javac prog6.java 
prog6.java:9: error: incompatible types: possible lossy conversion from double to int
		boolean b = (var1 = var2);
		                    ^
prog6.java:9: error: incompatible types: int cannot be converted to boolean
		boolean b = (var1 = var2);
		                  ^
2 errors
 */
