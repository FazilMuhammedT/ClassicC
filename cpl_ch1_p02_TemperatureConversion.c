/* Print Fahrenheit-Celsius Table
   for fahr = 0, 20,...,300 */ 

#include <stdio.h>
int main(){
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; 	//lower limit of temperature table
	upper = 300; 	//upper limit of temperature table
	step = 20;	//step size

	fahr = lower;

	printf("Fahrenheit - Celsius\n");

	while ( fahr <= upper ){
		celsius = 5.0 / 9.0 * (fahr-32);
		/*
		 * A decimal point in a constant indicates that it is floating point, 
		 * however, so 5. 0/9 . 0 is not truncated because it is the ratio of 
		 * two floating-point value
		 */
		printf("%6.0f %12.1f\n",fahr, celsius); 
		fahr = fahr + step;
	}
	
	lower = 0; 	//lower limit of temperature table
	upper = 100; 	//upper limit of temperature table
	step = 4;	//step size

	celsius = lower;

	printf("Celsius - Fahrenheit\n");
	while ( celsius <= upper ){
		fahr = 9.0 / 5.0 * celsius + 32;
		printf("%6.0f %12.1f\n",celsius, fahr); 
		celsius = celsius + step;
	}
	
	
	return 0;
}
