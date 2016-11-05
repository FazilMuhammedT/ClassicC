#include <stdio.h>

/**
 * Function to copy n successive index elements from a[] to b[]
**/
int copy_array (int a[], int b[], int n){
	for(int i = 0; i < n; i++)
		b[i] = a[i];
	return 0;
}

/**
 * Copy n numbers from the array from[] starting at index fromIndex 
 * into the array to[] starting at index toIndex
**/
int copy_array_2(int from[], int fromIndex, int to[], int toIndex, int n){
//	for(int i = fromIndex, j = toIndex; i < fromIndex + n; i++, j++)
//		to[j] = from[i];
	copy_array(from+fromIndex, to+toIndex, n);
	return 0;
} 

int main (){
	int a[] = {1,2,3,4,5,6,7,8,9,0}, b[5] = {0};
	printf("Array values before calling copy_array ");
	for(int i = 0; i < 5; i++)
		printf("%d ",b[i]);

	copy_array(a, b, 3);
	printf("\nArray values after calling copy_array ");
	for(int i = 0; i < 5; i++)
		printf("%d ",b[i]);

	copy_array_2(a, 7, b, 2, 3);
	printf("\nArray values after calling copy_array_2 ");
	for(int i = 0; i < 5; i++)
		printf("%d ",b[i]);

	printf("\n");
	return 0;
}
