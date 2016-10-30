#include <stdio.h>

/** Count the number of successive pairs of numbers that are relatively prime
 * i.e. gcd is 1
 * first line of input is n - the number of numbers to follow in the next line.
 * 
 * Example Input
 * 8
 * 4 6 16 7 8 9 10 11
 * 
 * Relatively Prime Pairs are 
 * 16 7, 7 8, 8 9, 9 10, 10 11
 * Answer 5
 */

//This function returns 1 if a and b are co-prime, else 0
int isCoPrime (int a, int b){

	int temp;
	if(a < b) { temp = a; a = b; b = temp; } //exchange a and b

	//Calcuating gcd of a and b
	while(b != 0) {
		temp = b;
		b = a % b;
		a = temp;
	}	

	if (a == 1)
		return 1;
	else
		return 0;
}

int main (){

	int previous, current;
	int i, n;
	int count = 0;

	printf("Enter the count of numbers ");
	scanf("%d", &n);
	scanf("%d", &previous);

	for (i = 1; i < n; i++) {
		scanf("%d", &current);
		count += isCoPrime(previous, current);
		previous = current;
	}

	printf("The count of relative prime is %d\n",count);
	return 0;
}
