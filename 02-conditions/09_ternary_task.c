/*
	Create a program to check whether a number is odd or even.
	- Use a tenary operator to check if the number is odd or even.
	- If number is odd, print "The number is Odd"
	- If the number is even print "The number is Even"
*/

#include <stdio.h>

int main (void){

	int result;

	printf(" Enter a number form 1 to 10 : ");
	scanf(" %d", &result);

//	int remainder = result % 2 ;

	const char *answer = (result % 2 !=0) ? "The number is Odd" : "The number is Even" ;
		printf(" %s\n", answer);

	return 0;
}
