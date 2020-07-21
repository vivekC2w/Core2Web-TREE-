

#include<stdio.h>

void main() {

	for(int i=0; i<=25; i++) {

		printf("%c = %c, ",(char)(i+65),(char)(i+97));

	}
	printf("\n");

}
/*
vivek@vivek-HIRAY:~/Desktop/ForAssignment$ cc prog6.c
vivek@vivek-HIRAY:~/Desktop/ForAssignment$ ./a.out 
A = a, B = b, C = c, D = d, E = e, F = f, G = g, H = h, I = i, J = j, K = k, L = l, M = m, N = n, O = o, P = p, Q = q, R = r, S = s, T = t, U = u, V = v, W = w, X = x, Y = y, Z = z, 
 */
