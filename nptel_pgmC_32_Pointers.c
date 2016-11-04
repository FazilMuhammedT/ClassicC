#include <stdio.h>

/** Program to play with pointers
 *
**/

int main(){
	int num[10];
	int *ptr; //Pointer to an integer - contains address of an integer variable.
	num[1] = 1;
	ptr = &num[1]; //Assign the address of the num[1]
	
	printf("Value of the ptr -> %p\n",ptr);
	printf("Address of the num[1] -> %p\n",&num[1]);

	printf("Value of the integer in ptr -> %d\n",*ptr);//*ptr is the dereferenicing pointer
	printf("Value of the integer in num[1] -> %d\n",num[1]);

	printf("Enter the value to ptr -> ");
	scanf("%d",ptr);//Reading value to the address pointed to by the corresponding argument
	
	printf("Value of the new integer in ptr -> %d\n",*ptr);
	printf("Value of the new integer in num[1] -> %d\n",num[1]);

	num[2] = *ptr; //Assigning the integer value in the pointer to num[2] using dereferencing pointer
	printf("Value of the  integer in num[2] -> %d\n",num[2]);



	return 0;
}
