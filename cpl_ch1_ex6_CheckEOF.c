#include <stdio.h>

/* verify that expression getchar != EOF is 0 or 1 */

int main(int argc, char *argv[]){
	int c;
	while((c = getchar()) != EOF){
		putchar(c);
		printf(" %d\n", c != EOF); 
	}

	printf("%d\n", c != EOF); 
	return 0;
} 
