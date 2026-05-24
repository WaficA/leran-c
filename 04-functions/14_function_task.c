/*	Create a program that has a functionthat :
	- takes two numbers
	- perform the multiplication of two numbers
	- returns result				*/

#include <stdio.h>



int multiFunc(int num1, int num2){

	int result = num1 * num2;
	printf("%d * %d = %d\n", num1, num2, result);
	return result;
}


int main (void){

	int x;
	int y;
	printf(" Choose first number :");
	scanf("%d", &x);
	printf(" Choose second number :");
	scanf("%d", &y);

	multiFunc(x, y);

	return 0;
}




