//	check  ~/kernelpaths/00_types.md for more Data Types
/*
int		(4 bytes) | %d for printing
double		(8 bytes) | %lf for printing
float		(4 bytes) | %f for printing
char		(1 byte)  | %c for printig
*/

#include <stdio.h>


int main (){

	int age = 10;
printf(" Integer: %d", age);

	double num = 22.22;
printf("\n Double Number: %.3lf", num);

	double expo = 5.5e6;
printf("\n 5.5e6 = %f", expo);

	float fl = 34.5f;
printf("\n Float Value: %f", fl);

	char character = 'V';
printf("\n Integer value of v : %d", character);
printf("\n This is a character: %c\n", character);



	return 0;
}
