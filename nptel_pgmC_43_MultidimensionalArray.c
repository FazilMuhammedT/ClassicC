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

int main (){
	int array[][3] = { {1}, {2, 3}, {3, 4, 5}};
	printArray(array);
	return 0;
}
