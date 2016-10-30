#include <stdio.h>

/** Print Reverse
 * Two parts in main - read_into_array and print_reverse
 * read_into_array .. read the input character upto 100 characters or until a <ctrl-D> is read
 * print_reverse .. print characters in reverse
**/

int main (){
	
	char str[100];
	int count = 0;
	int ch;

	//read_into_array
	printf("Enter the string\n");
	ch = getchar();
	while ( ch != EOF && count < 100){
		str[count] = ch;
		count++;
		ch = getchar();
	}
	//print_reverse
	printf("\nPrint String in reverse order\n");
	for (int i = count-1; i >= 0; i-- ){
		putchar(str[i]);
	}
	printf("\n");

	return 0;
}
