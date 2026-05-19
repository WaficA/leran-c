/*
	test_condition ? expression1 : expression2;
*/
#include <stdio.h>

int main (void){

	int age;

		printf(" Enter your age = ");
		scanf(" %d",&age);

	const char *result = (age >= 18) ? "You are of age" : "you are under age" ;
		printf(" %s\n",result);

// store values and use in the operator

	char operator;
		printf(" choose '+' or '-' : ");
		scanf(" %c", &operator);

	int one = 8;
	int two = 4;

	int result2 = (operator == '+') ? (one + two) : (one - two);
		printf(" %d\n", result2);

	return 0;
}
