/* Experimenting with Contants */

#include <stdio.h>
#include <string.h>

int stringlength(char string[]);	//declaring the method strinlength

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

	printf("\nPrinting Bell, Vertical and A ");

	char bellch = '\x7'; //sounds a bell
	char vtabch = '\xb'; //prints vertical space
	char aChar = '\x41'; //hex 41 = decimal 65 : ASCII code for 'A'

	printf("%c%c%c", bellch, vtabch, aChar);
	
	printf("\n");

	char sentence[] = "This is a string";		//A string constant is an array of characters. The internal representation of a string has a null character ' \0' at the end
	printf("Printing string constant %s\n",sentence);
	int stringLength = stringlength(sentence);
	printf("Length of the string is %d\n",stringLength);
	printf("Length of string calculated using string library method is %lu\n",strlen(sentence));
	
	enum boolean {NO, YES};
	enum boolean flag = NO;
	printf("Printing Enumeration constant value for boolean - NO is %d\n",flag);	
	printf("Printing Enumeration constant value for boolean - YES is %d\n",YES);
	
	
	typedef enum months { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC } Months; /* FEBis2,MARis3,etc. */
	enum months January = JAN;
	Months June = JUN;
	printf("Printing enumeration constants of enum months - January is %d, June is %d, December is %d\n", January, June, DEC);

	return 0;
}

/* strlen: return the length of string */
int stringlength(char string[]){
        int length=0;
	while(string[length] != '\0')
		++length;
	return length;
}
