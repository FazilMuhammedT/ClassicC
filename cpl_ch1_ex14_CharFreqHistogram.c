#include <stdio.h>

/* histogram of the frequencies of different character in its input */

int main (int argc, char *argv[]) {

	int c, frequency[128], i,j;

	for (i = 0; i < 128; ++i)
		frequency[i] = 0;

	while ((c = getchar()) != EOF)
		++frequency[c];

	for (i = 0; i < 128; ++i){
		if (frequency[i] != 0) {	
		printf("%5d %c\t",i,i);
		for (j = 0; j < frequency[i]; j++)
			printf("*");
		printf("\n");
		}
	}
	return 0;	
} 
