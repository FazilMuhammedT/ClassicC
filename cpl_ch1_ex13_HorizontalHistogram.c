#include <stdio.h>

/* Print a histogram of the lengths of words in its input */

int main (int charc, char *argv[]) {
	int c;

	while ((c = getchar()) != EOF)
		if (c == ' ' || c == '\t' || c == '\n')
			printf("\n");
		else
			printf("*");

	printf("\n");
	return 0;
}
