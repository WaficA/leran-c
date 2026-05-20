#include <stdio.h>

int main (void){

	char operator;
		printf(" Choose your operator ['+','-','*','/'] : ");
		scanf(" %c", &operator);

	double num1;
	double num2;

		printf(" Enter first number : ");
		scanf("%lf", &num1);

		printf(" Enter second number : ");
		scanf("%lf", &num2);

	double result;

	switch(operator){

		case '+':
		result = num1 + num2;
		break;

		case '-':
		result = num1 - num2;
		break;

		case '*':
		result = num1 * num2;
		break;

		case '/':
		result = num1 / num2;
		break;

		default :
			printf(" Error in inputs ");

}
			printf("%.4lf\n", result);
	return 0;
}
