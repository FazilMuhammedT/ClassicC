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

//Copy a string by passing it into heap
char *duplicate (char *s){
	int len=0; //to store length of s
	char *t; //char to point to string in heap

	//find the length of string
	while(s[len] != '\0')
		len++;
	len++;//to make space for '\0' 

	//Allocate memory in heap for t 
	t = (char *) malloc(len * sizeof(char));
	
	//Copy the content of s to t
	for(int i = 0; i < len; i++)
		t[i] = s[i];
	t[len] = '\0'; //assigining the last character to null value

	return t;
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

	char str[] = "hello world";
	char *copyStr;

	copyStr = duplicate(str);
	printf("String from heap -> %s\n",copyStr);
	free(copyStr);

	return 0;
}
