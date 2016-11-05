#include <stdio.h>

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

int main(){
	int *p = increment(1); 
	printf("Integer value after incremneting 1 - %d\n",*p);
	return 0;
}
