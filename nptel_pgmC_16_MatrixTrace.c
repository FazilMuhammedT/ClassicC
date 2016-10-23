#include <stdio.h>

/* Matrix Problem
 * The first line of the input has a positive integer n, the next n rows, each have n floating point numbers each, denoting as n X n matrix Aij where, 0 <= i,j <= n-1.
 * The problem is to compute the trace of the matrix, that is the sume of the diagonal elements
 */

int main (){
	
	int n;
	float a, trace = 0.0;

	printf("Please enter the order of square matrix :");
	scanf("%d",&n);

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%f",&a);
			if(i == j)
				trace += a;
		}
	}

	printf("Trace of the matrix is %f\n",trace);
	return 0;

} 
