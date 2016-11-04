#include <stdio.h>

/**
 * Pointer Arithmetic
**/

int main (){

	char str[] = "Programming in C is Cool!";
	char *ptr = str + 6; // Initializing a character pointer with 7th location in str[]
	printf("Value of ptr is %c\n",*ptr);
	printf("Printing the string value starting from 6 locations before ptr -> %s\n",ptr-6);
	return 0;
}
