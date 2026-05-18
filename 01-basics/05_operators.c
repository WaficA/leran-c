// Addition		+
// Subtraction		-
// Multiplication	*
// Division		/
// Remainder		%
// Increment		++
// Decrement		--

#include <stdio.h>

int main () {

	double x = 12.56;

	int y = 8;

	double addition = x + y;
printf(" x = %f\n", x);
printf(" y = %d\n", y);
printf(" x + y = %.2lf\n", addition);

	double division = addition/2;

printf (" Divided by two p = %.4lf\n", division);

// Only works on integers
	int remainder = y % 3;
printf(" Remainder = %d\n", remainder);

printf(" y incremented by one = %d\n", ++y);
printf(" p decremented by one %lf\n", --division);
	return 0;
}

// Same exercie for * and -
// Operators with higher precedence are executed first
// Use of ( ) is good practice in equations
