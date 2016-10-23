#include <stdio.h>

/* Pythagorean Triples
 * Read n, assume n >= 2.
 * Read n integers, and print triplets of consecutively positive input integers that are pythogorean, skipping negative intergers
 */

int main (){

	int n;
	int first, second, third;
	int count = 0;

	printf("Enter the number of integers : ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++){
		scanf("%d",&first);

		if (first <= 0)
			continue;
		if (count == 0){
			third = first;
			count = 1;
		} else if (count == 1) {
			second = first;
			count = 2;
		} else {
			if (third * third + second * second == first * first){
				printf("Pythagorean Triples Found \n");
				printf("%d %d %d\n",third,second,first);
			}
			third = second;
			second = first;
		}
	}

	return 0;
}
