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


int main(){
	int array[] = {5, 4, 3, 2, 1};

	int searchForZero = search(array, 5, 0);
	printf("Searching for the key 0 returned %d\n", searchForZero);

	int searchForThree = search(array, 5, 3);
	printf("Searching for the key 3 returned %d\n", searchForThree);

	return 0;
}
