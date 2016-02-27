/* 
 * program to determine the ranges of char, short, int,
 * and long variables, both signed and unsigned, 
 * by printing appropriate values from standard headers and by direct computation. 
 */

#include <stdio.h>
#include <limits.h>

int main(){
	
	printf("Determining the variable range using standard library limits.h\n");

	printf("Size of char %d\n",CHAR_BIT);
	printf("Size of char max %d\n",CHAR_MAX);
	printf("Size of char min %d\n",CHAR_MIN);
	
	printf("Size of short  max %d\n",SHRT_MAX);
	printf("Size of short  min %d\n",SHRT_MIN);
	
	printf("Size of int max %d\n",INT_MAX);
	printf("Size of int min %d\n",INT_MIN);

	printf("Size of long max %ld\n",LONG_MAX);
	printf("Size of long min %ld\n",LONG_MIN);
	
	printf("Size of unsigned char %u\n",UCHAR_MAX);
	printf("Size of unsigned short %u\n",USHRT_MAX);
	printf("Size of unsigned int %u\n",UINT_MAX);
	printf("Size of unsigned long %lu\n",ULONG_MAX);

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

	return 0;
}
