#include <stdio.h>

int main (){

	char str[] = "This is a String";

	printf("String is %s\n",str);

	str[4] = '\0'; //Inserting null character at position 4
	printf("String after inserting NULL Character is %s\n",str);

	printf("Printing character using loop method ");
	for (int i = 0; i < 17; i++)
		putchar(str[i]);
	printf("\n");
	return 0;
}
