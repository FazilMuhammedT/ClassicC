#include <stdio.h>
/* Program to print Farhenheit to Celsius */

#define LOWER	0	/* lower limit */
#define UPPER	300	/* upper limit */
#define STEP	20	/* step */

int main(){
	printf("Print Fahrenheit to Celsius using for loop\n");
	for(int fahr = UPPER; fahr >= LOWER; fahr = fahr-STEP){
		printf("%3d  %6.2f\n",fahr,(5.0/9.0)*(fahr-32));
	} 
}

