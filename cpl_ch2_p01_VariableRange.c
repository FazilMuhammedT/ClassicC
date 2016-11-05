/* 
 * program to determine the ranges of char, short, int,
 * and long variables, both signed and unsigned, 
 * by printing appropriate values from standard headers and by direct computation. 
 */

#include <stdio.h>
#include <limits.h>

int main(){
	
	printf("Determining the variable range using standard library limits.h\n");

	printf("Size of char %d bit\n",CHAR_BIT);
	printf("Size of char using sizeof operator %lu byte\n",sizeof(char));

	printf("Value of char max %d\n",CHAR_MAX);
	printf("Value of char min %d\n",CHAR_MIN);
	
	printf("Size of short using sizeof operator %lu byte\n",sizeof(short));
	printf("Value of short  max %d\n",SHRT_MAX);
	printf("Value of short  min %d\n",SHRT_MIN);
	
	printf("Size of int using sizeof operator %lu byte\n",sizeof(int));
	printf("Value of int max %d\n",INT_MAX);
	printf("Value of int min %d\n",INT_MIN);

	printf("Size of long using sizeof operator %lu byte\n",sizeof(long));
	printf("Value of long max %ld\n",LONG_MAX);
	printf("Value of long min %ld\n",LONG_MIN);
	
	printf("Value of unsigned char %u\n",UCHAR_MAX);
	printf("Value of unsigned short %u\n",USHRT_MAX);
	printf("Value of unsigned int %u\n",UINT_MAX);
	printf("Value of unsigned long %lu\n",ULONG_MAX);

	printf("Determining the variable range using direct computation\n");
	
	printf("Minimum Signed Char %d\n",-(char)((unsigned char) ~0 >> 1) - 1);
	printf("Maximum Signed Char %d\n",(char) ((unsigned char) ~0 >> 1));

	printf("Minimum Signed Short %d\n",-(short)((unsigned short)~0 >>1) -1);
	printf("Maximum Signed Short %d\n",(short)((unsigned short)~0 >> 1));

	printf("Minimum Signed Int %d\n",-(int)((unsigned int)~0 >> 1) -1);
	printf("Maximum Signed Int %d\n",(int)((unsigned int)~0 >> 1));

	printf("Minimum Signed Long %ld\n",-(long)((unsigned long)~0 >>1) -1);
	printf("Maximum signed Long %ld\n",(long)((unsigned long)~0 >> 1));

	/* Unsigned Maximum Values */

	printf("Maximum Unsigned Char %d\n",(unsigned char)~0);
	printf("Maximum Unsigned Short %d\n",(unsigned short)~0);
	printf("Maximum Unsigned Int %u\n",(unsigned int)~0);
	printf("Maximum Unsigned Long %lu\n",(unsigned long)~0);

	printf("Size of float using sizeof operator %lu byte\n",sizeof(float));
	printf("Size of double using sizeof operator %lu byte\n",sizeof(double));

	int array[] = {0,1,2,3,4,5,6,7,8,9};
	printf("Size of array[] using sizeof operator %lu byte\n",sizeof(array));
	printf("Size of array[0] using sizeof operator %lu byte\n",sizeof(array[0]));
	printf("Length of the array calculated using sizeof operator - %lu\n", sizeof(array) / sizeof(array[0]));

	return 0;
}
