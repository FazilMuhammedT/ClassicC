#include <stdio.h>

/* To find the greatest common divisor of two positive integers m and n, m>= n */ 

/** Algorithm
1. Take the small number n
2. For each number k, n >= k >= 1, in descending order, do the following
	If k divides m and n, then k is the gcd of m and n.
*/

int main (){
	int m, n, k;
	
	printf("Please Enter m and n values\n");
	scanf("%d%d",&m,&n);
	printf("m = %d and n = %d\n",m,n);

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
	
	return 0;
}
