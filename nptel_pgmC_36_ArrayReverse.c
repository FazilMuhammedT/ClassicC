#include <stdio.h>

/**
 * Reverse an array without using a new array
**/

void rev_array( int a[], int n){
	int *b = a+n -1; //Pointer to the last element of array 
	while ( b > a) { // we can compare two pointers a and b using <. For this, they must be pointing to locations in the same array! e.g. a+1 < a+2
		*a = *a + *b; *b = *a - *b; *a = *a - *b; //Swap values in the pointer
		a = a + 1; //increment the array address
		b = b - 1; //decrement the array address
	}
}

int main(){
	
	int array[] = {1,2,3,4,5};

	printf("Array before reverse -> ");
	for (int i = 0; i < 5; i++) 
		printf("%d ",array[i]);

	rev_array(array,5);
	printf("\nArray after reverse -> ");
	for (int i = 0; i < 5; i++) 
		printf("%d ",array[i]);
	printf("\n");

	return 0;
}
