#include <stdio.h>
/* Print Fahrenheit-Celsius Table
   for fahr = 0, 20,...,300 */ 

int main(){
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; 	//lower limit of temperature table
	upper = 300; 	//upper limit of temperature table
	step = 20;	//step size

	fahr = lower;

	while ( fahr <= upper ){
		celsius = 5.0 / 9.0 * (fahr-32);
		/*
		 * A decimal point in a constant indicates that it is floating point, 
		 * however, so 5. 0/9 . 0 is not truncated because it is the ratio of 
		 * two floating-point value
		 */
		printf("%3.0f %6.1f\n",fahr, celsius); 
		fahr = fahr + step;
	}

	return 0;
}
