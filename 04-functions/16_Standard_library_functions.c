/* User defined function : are functions created by us.
...	Standard library funtion : functions that are already defined in libraries
		eg. printf function is a standard library function that is defined inside stdio.h header files
	CHECK ~/kernelpath/00_standard_headers.md for diffrent headers list
*/
#include <stdio.h>
// <stdio.h> : eg. printf, scanf are defined inside stdio
#include <math.h>
// sqrt(), cbrt(), pow()
#include <ctype.h>
//toupper(),

int main (void){
	int num = 25;
	printf(" Square root of 25 =%4.lf\n", sqrt(num));
	printf(" Cube root of 25 = %lf\n", cbrt(num));

	int a = 5;
	int b = 2;
	double result = pow(a, b);
	printf(" Power = %lf\n", result);

	char alpha = 'e';
	int upperCase = toupper(alpha);
//	char upperCase = (char)toupper(alpha);	//int matches native return type, prevents silent data truncation
	printf(" uppercase = %c\n", upperCase);

	int lowerCase = tolower(upperCase);
	printf(" %c\n", lowerCase);

	return 0;
}
