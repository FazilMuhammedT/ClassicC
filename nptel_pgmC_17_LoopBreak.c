#include <stdio.h>

/* Read integer maxChars, followed by some character.
 * Exit loop if either limit exceeded, or a blank line is entered
 */

int main (){

	int maxChars;
	char current = '\n', previous;

	printf("Enter the maximum characters allowed : ");
	scanf("%d",&maxChars);
	getchar(); //read the first character

	for (int i = 0; i < maxChars; i++){
		previous = current;
		current = getchar();
		if(current == '\n' && previous == '\n')
			break;
	}

	return 0;
}
