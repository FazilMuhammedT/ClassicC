#include <stdio.h>

/* copy its input to its output, 
 * replacing each string of one or more blanks by a single blank 
 * EDIT : Changed to print each word in new line
 */

int main(int argc, char *argv[])
{
	int c, nb;
	nb = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			if (nb == 0){
				//putchar(c);	//commented to print each word new line
				putchar('\n');
				nb = 1;
			}
		}
		else if(c == '\t') {
			if (nb == 0){
				//putchar(' ');	//commented to print each word new line
				putchar('\n');
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
