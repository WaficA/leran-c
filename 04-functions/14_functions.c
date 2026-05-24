/**/
#include <stdio.h>
#include <math.h>

void greet(void){
		printf("Good Morning");
}

// Function Parameter

int calcSquare(int number){
	int square = number * number;
		printf(" Square of %d is %d\n", number ,square);
	return square;
}

// multiple parameters

int addNums(int num1, int num2){
	int addition = num1 + num2;
		printf(" %d + %d = %d \n", num1, num2, addition);
	return addition;
}

int main (void){

	int userInput;
	int x;
	int y;

	greet();
	printf(" : After function call \n");

	printf(" Choose a number : ");
	scanf("%d", &userInput);

	calcSquare(userInput);

	printf(" Choose first number to add :");
	scanf("%d", &x);
	printf(" Choose second number :");
	scanf("%d", &y);

	addNums(x, y);

	float result = sqrt(25);
	printf(" Square root of 25 using sqrt function :%4.f\n", result);

	return 0;
}

/* function prototype :  has name and type with no body.
	declared before the main function, while the function itself now can live after the main function.

// User defined function : are functions created by us.
// Standard library funtion : functions that are already defined in libraries
	eg. printf function is a standard library function that is defined inside stdio.h header file.

*/

