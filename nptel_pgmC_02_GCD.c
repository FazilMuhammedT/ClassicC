#include <stdio.h>

/* To find the greatest common divisor of two positive integers m and n, m>= n */ 

/** Algorithm

a. Common Method

1. Take the small number n
2. For each number k, n >= k >= 1, in descending order, do the following
	If k divides m and n, then k is the gcd of m and n.

This takes longer time if m and n value are large.

b. Euclidian Method

Measure the longer with the shorter. Take the remainder if any. 
Repeat the process until the longer can be exactly measured as an integer multople of the shorter.

Suppose a > b, Then the gcd of a and b is same as the gcd of b and the remainder of a when divided by b. 

gcd(a,b) = gcd(b, a % b)
*/

int main (){
	int m, n, k;
	
	printf("Please Enter m and n values\n");
	scanf("%d%d",&m,&n);
	printf("m = %d and n = %d\n",m,n);

/*
	if(m > n)
		k = n;
	else
		k = m;

	while(k > 0){
		if(m % k == 0 && n % k == 0)
			break; 
		--k;
	}
	printf("Greatest common divisor of %d and %d is %d\n",m,n,k);
*/
	int a = m, b = n;
	// Steps to interchange a and b, if a < b
	if(a < b){
		a = a + b;
		b = a - b;
		a = a - b;
	}
	printf("a = %d, b = %d\n", a,b);
	while ( b > 0 ){
		printf("a = %d, b = %d, k = %d\n",a,b,k);
		k = a % b;
		a = b;
		b = k;
	}

	printf("Greatest common divisor of %d and %d is %d\n",m,n,a);
	
	return 0;
}
