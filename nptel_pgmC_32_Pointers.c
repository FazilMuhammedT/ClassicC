#include <stdio.h>

/** Program to play with pointers
 *
**/

int main(){
	int num[] = {1,10,-1,4,6};
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
	*ptr = *ptr + 5; //This will add 5 to the value in the address pointed by the ptr
	printf("Value of the integer in num[1] after addition -> %d\n",num[1]);
	printf("Value of the integer in num[2] -> %d\n",num[2]);

	printf("Printing the values in array using pointer arithmetic -> %d %d %d %d %d\n", *(num), *(num+1), *(num+2), *(num+3), *(num+4));

	return 0;
}
