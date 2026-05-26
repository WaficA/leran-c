/*	Create a program that computes the factorial of a number.
	- Take input from user
	- Pass the input value to a function
	- Inside the function check if the number is greater than 0
	- If true, return number multiplied by a recursive call to the function with
	  parameter 1 less than number.
	- Otherwise, return 1.
*/
#include <stdio.h>

int userInput(void){
	int value;
	printf(" Choose a number :");
	scanf("%d", &value);
	return value;
}

int factorialFunction (int n){
	if (n > 0){
	return n * factorialFunction(n-1);
	}
	return 1;
}

int main (void){

	int n = userInput();

//	int answer = factorialFunction(n);
//	printf("%d\n", answer);

	printf(" The factorial is = %d\n", factorialFunction(n));

	return 0;
}
