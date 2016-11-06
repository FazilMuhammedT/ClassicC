#include <stdio.h>

/**
 * Play with multi dimensional arrays
**/

//Print the elements in the array
void printArray(int array[3][3]){
	for ( int i = 0 ; i < 3; i++){
		for ( int j = 0; j < 3; j++) {
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
}

//To print the sum of each rows upto n, where n < number of rows.
void rowSum (int array[][3],int n){
	int rowSum = 0;
	for(int i = 0; i < n; i++){
		rowSum = 0;
		for(int j = 0; j < 3; j++)
			rowSum += array[i][j];
		printf("Sum of %d row is %d\n", i, rowSum);
	}
}

int main (){
	int array[][3] = { {1}, {2, 3}, {3, 4, 5}};
	printArray(array);
	rowSum (array, 2);
	return 0;
}
