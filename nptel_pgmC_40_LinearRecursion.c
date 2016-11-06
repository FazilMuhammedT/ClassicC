#include <stdio.h>

/**
 * Recursive function to search for key in array a with elements.
 * Returns 1 if key is present in array, -1 otherwise.
**/

int search( int a[], int n, int key){

	if ( n == 0 )
		return -1; //Base Case
	if ( a[0] == key )
		return 1; //found
	else
		return search ( a+1, n-1, key); //recursive call
}

//Method to swap two numbers
void swapNumbers(int *a, int *b){
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

//reverse two numbers using linear recursion method
void reverse(int a[], int n){
	
	if (n == 0 || n == 1)
		return;
	else {
		swapNumbers(a, a+n-1);
		reverse(a+1, n-2);
	}
}

int main(){
	int array[] = {5, 4, 3, 2, 1};
	int evenArray[] = {2, 4, 6, 8, 10, 12};

	int searchForZero = search(array, 5, 0);
	printf("Searching for the key 0 returned %d\n", searchForZero);

	int searchForThree = search(array, 5, 3);
	printf("Searching for the key 3 returned %d\n", searchForThree);

	printf("Reverse odd array -> ");
	reverse(array, 5);
	for(int i = 0; i < 5; i++ )
		printf("%d ",array[i]);
	printf("\n");

	printf("Reverse even array -> ");
	reverse(evenArray, 6);
	for(int i = 0; i < 6; i++ )
		printf("%d ",evenArray[i]);
	printf("\n");

	return 0;
}
