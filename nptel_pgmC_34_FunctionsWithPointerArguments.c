#include <stdio.h>

/**
 * Program to swap two numbers
**/

//Swap function to interchange two parameters using Call by Value
//In this the values are passed and interchange is done inside the function and not passed back
void swap( int a, int b){
	printf("Swap :: Values before swap :: a -> %d b -> %d \n", a, b);
	a = a + b; b = a - b; a = a - b; //Step to swap 
	printf("Swap :: Values after swap :: a -> %d b -> %d \n", a, b);
}

//Swap function to interchange two integer by Call by Arguments
//In this the values are interchanged and the same is reflected in the called function
void PointerSwap( int *a, int *b){
	printf("PointerSwap :: Values before swap :: a -> %d b -> %d \n", *a, *b);
	*a = *a + *b; *b = *a - *b; *a = *a - *b; //Step to swap 
	printf("PointerSwap :: Values after swap :: a -> %d b -> %d \n", *a, *b);
}

int main(){

	int a = 1, b = 2;
	printf("Main :: Values before calling swap() :: a -> %d b -> %d \n", a, b);
	swap(a, b);//Pass by value
	printf("Main :: Values after calling swap() :: a -> %d b -> %d \n", a, b);
	PointerSwap(&a, &b);//Pass by arguments
	printf("Main :: Values after calling PointerSwap() :: a -> %d b -> %d \n", a, b);
	return 0;
}
