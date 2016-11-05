#include <stdio.h>
#include <stdlib.h>

/**
 * This is an example for Dangling Pointer
 * The function *increment returns the address of temp, but temp is erased as soon as incremnet(n) returns.
**/
int *increment (int n) {
	int temp;
	int *ptr = &temp;
	temp = n + 1;
	return ptr;
}

int *incrementUsingHeap (int n) {
	int *ptr;
	// Allocate one integer on the heap
	// Treat the return address as an integer pointer
	ptr = (int *) malloc(sizeof( int ));
	// Increment the value in heap using dereferncing property
	*ptr = n + 1;
	// return will remove the ptr in stack, but the memory allocated in heap stays
	return ptr;
}

int main(){
	int *p = increment(1); 
	printf("Integer value after incrementing 1 - %d\n",*p);

	p = incrementUsingHeap(1);
	printf("Integer value after incrementing 1 using heap property - %d\n",*p);
	// remove the space allocated on heap in the function incrementUsingHeap()
	// Forget to free memory after use called a memory leak
	free(p);
	p = 0;

	return 0;
}
