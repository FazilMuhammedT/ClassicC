#include <stdio.h>

/*  
 * to copy its input to its output, 
 * replacing each tab by \t, 
 * each backspace by \b, 
 * and each backslash by \\
 */

int main(int argc, char *argv[])
{
	int c;

	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			putchar('\\');
			putchar('t');
		}
		else if(c == '\b') {
			putchar('\\');
			putchar('b');
		}
		else if(c == '\\') {
			putchar('\\');
			putchar('\\');
		}
		else {
			putchar(c);
		}
	}
	
	return 0;
}