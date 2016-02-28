#include <stdio.h>

/* Count characters in input */

int main(int argc, char* argv[]){
	long nc;
	nc =0;
	
	while (getchar() != EOF)
		++nc;
	printf("Character count %ld\n", nc);
	return 0;
}
