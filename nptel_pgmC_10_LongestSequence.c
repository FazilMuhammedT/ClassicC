#include <stdio.h>

/* Read a sequence of numbers until a -1 is read.
 * Output the length contiguous increasing sub-sequence
 * 
 * Example Input
 * 9240345692 -1
 *
 * The increasing contiguous sub-sequences are:
 * 9 24 034569 2
 * 
 * The largest one is 034569 and has length 6
 */

int main(){

	int current, previous, seqLength = 0, maxLength = 0;
	
	printf("Please enter the sequence (enter -1 to exit) \n");
	scanf("%d",&previous);

	if (previous != -1){
		seqLength = 1;
		maxLength = 1;
		scanf("%d", &current);

		while (current != -1)
		{
			if (previous < current)
				seqLength += 1;
			else
			{
				if (maxLength < seqLength)
					maxLength = seqLength;
				seqLength = 1;
			}
			previous = current;
			scanf("%d",&current);
		}
		if (maxLength < seqLength)
			maxLength = seqLength;
	}

	printf("Length of the longest contiguous increasing sub-sequence is %d\n",maxLength);
	return 0;
}
