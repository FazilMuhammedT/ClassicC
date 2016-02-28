#include <stdio.h>

/* copy its input to its output, 
 * replacing each string of one or more blanks by a single blank 
 */

int main(int argc, char *argv[])
{
	int c, nb;
	nb = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			if (nb == 0){
				putchar(c);
				nb = 1;
			}
		}
		else if(c == '\t') {
			if (nb == 0){
				putchar(' ');
				nb = 1;
			}
		}
		else {
			putchar(c);
			nb = 0;
		}
	}
	
	return 0;
}
