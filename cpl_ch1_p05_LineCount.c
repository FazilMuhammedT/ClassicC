#include <stdio.h>

/* count blanks, tabs and newlines in input */

int main(int argc, char *argv[])
{
	int c, nb, nt, nl;
	nb = 0;
	nt = 0;
	nl = 0;

	while ((c = getchar()) != EOF){
		if (c == '\n')
			nl++;
		else if (c == '\t')
			nt++;
		else if (c == ' ')
			nb++;
	}
	printf("Blank space is %d, Tab Count is %d amd Line count is %d\n", nb, nt, nl);
	
	return 0;
}
