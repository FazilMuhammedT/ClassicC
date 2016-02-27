/* Experimenting with Contants */

#include <stdio.h>
int main(){
	
	printf("Experimenting with constants\n");
	
	printf("Printing an integer constant %d\n",1234);
	printf("Printing an long constant %ld\n",123456789L);
	printf("Printing an float constant %f\n",123.49F);	//float constant
	printf("Printing an float constant %f\n",123.49);	//double constant, if specifier not mentioned

	char value='a';
	printf("Printing character constant %c and its integer value %d\n",value,value);
	printf("Printing character constant \n");	//The value of a character constant is the numeric value of the character in the machine's character set
	int character = 33;
	while(character<127){
		printf("%c is %d\t",character,character);
		character++;
	}
	printf("\n");

	char sentence[] = "This is a string";		//A string constant is an array of characters. The internal representation of a string has a null character ' \0' at the end
	printf("Printing string constant %s\n",sentence);

	return 0;
}
