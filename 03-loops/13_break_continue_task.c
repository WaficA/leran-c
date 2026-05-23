/*	Write a program that takes an input from the user and prints it
	if the value is a negative odd number.

	- If the input value is positive, end the loop with message, Positive value.
	- If the input is negative even, skip the value with message Negative Even.
*/

#include <stdio.h>


int function(void){
	while(1){
	int input;
		printf("Input a negative odd number :");
		scanf("%d", &input);

	if (input >= 0){
	printf(" This is a positive number\n !!!Program Terminated!!!\n");
	break;
		}
	if (input < 0 && input % 2 == 0){
		printf(" Negative even is not returned. Try Again!! \n");
	continue;
		}

	if (input < 0 && input % 2 != 0){
		printf(" Confirmed. The input is negative = %d \n", input);
		}

	}
	return 0;
}

int main (void){

	function();

	return 0;
}





