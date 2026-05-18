// Data Type Heirarcy
// long double
// double
// float
// long
// int
// short
// char

#include <stdio.h>

int main () {

	char a = '5';
	int b = 9;
// char promoted to int
  int result = a + b;
printf(" '5' + 9 %%d = %d\n", result);

	double c = 15.67 ;
	int d = 9;

  double result_A = c + d;
// int is promoted to double
printf(" Double + int = %.4lf\n",result_A);

//data on right side of assignment operator is converted to data type on the left
//this causes demoted types
	int demote = 8.88;
printf(" loss of data = %d\n", demote);


//explicit

	double e = 22.22;
	int f = 2;

  int result_b = (int)e + f;

printf(" explicitly lost data = %d\n",result_b);


	int g = 9;
	int h = 2;

  double result_c = (double)g / h;
printf(" DEBUG: reached here\n");
printf(" %.3lf\n",result_c);


	return 0;
}


