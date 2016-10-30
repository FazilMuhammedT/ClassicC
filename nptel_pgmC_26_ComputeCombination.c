#include <stdio.h>

/** Compute nCk - n choose k
 * nCk = n! / (k! * (n-k)!)
 */

// Function to calculate factorial of a number
int factorial (int number) {

	int factorial = 1;
	for (int i = 0; i < number; i++)
		factorial *= i+1;
	return factorial;
}

int main() {
	
	int n, k;
	int combination;

	printf("Enter n and k ");
	scanf("%d%d",&n,&k);

	combination = factorial(n) / factorial(k) / factorial(n-k);
	printf("%d choose %d is %d\n",n,k,combination);

	return 0;
}
