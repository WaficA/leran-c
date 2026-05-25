/*	Create a program that computes the result of a number raised to the power of the
	square root of a number.
	- take input from user
	- compute the square root of a number using sqrt()
	- compute the power of the number raised to the power of its square root
	- print the result
*/
#include <stdio.h>
#include <math.h>


int main (void){

	double num;
	printf(" Choose a number : ");
	scanf("%lf", &num);

	double squareRoot = sqrt(num);
	printf(" Square root of chosen number is = %lf\n", squareRoot);

	double power = pow(num, squareRoot);
	printf(" Chosen Num. raised its Square root = %lf\n", power);

	return 0;
}
