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

/**
 * Maximum of the numbers in an array using linear recursion
 * Stack depth is this case is n
**/
int max_array (int a[], int n) {
	int maxVal;
	if (n == 0) return -99999; //some large -ve number
	if (n == 1) return a[0]; //1 element array
	//if n >= 2, find the largest element in the array
	maxVal = max_array( a+1, n-1);
	return (a[0] > maxVal) ? a[0] : maxVal;
}

//Method to find maximum of two numbers
int max_Value( int a, int b){
	return ( a > b ) ? a : b;
}

/**
 * Maximum of the numbers in an array using two way recursion
 * Stack depth in this case is log n
**/
int max_array_twowayrecursion (int a[], int n) {
	int maxVal;
	if (n == 0) return -99999; //some large -ve number
	if (n == 1) return a[0]; //1 element array
	//if n >= 2, find the largest element in the array
	return max_Value ( max_array_twowayrecursion(a, n/2), max_array_twowayrecursion( a + n/2, n - n/2));
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

	printf("Maximum value in the even array -> %d\n",max_array(evenArray,6));
	printf("Maximum value in the even array using recursion method -> %d\n",max_array_twowayrecursion(evenArray,6));

	return 0;
}
