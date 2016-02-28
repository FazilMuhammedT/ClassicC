#include <stdio.h>
/* Program to print Farhenheit to Celsius */

int main(){
	printf("Print Fahrenheit to Celsius using for loop\n");
	for(int fahr=300; fahr>=0; fahr=fahr-20){
		printf("%3d  %6.2f\n",fahr,(5.0/9.0)*(fahr-32));
	} 
}

