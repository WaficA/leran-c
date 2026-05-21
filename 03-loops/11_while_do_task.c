/*	Use the while loop to print the multiplication table from
the given number.
	Print the number from 10 to 1. So the output would be
something like this.
9*10 = 90
9*9 = 81
.
.
.
9*1 = 9
*/

#include <stdio.h>

int main (void){

	int userInput;
		printf(" Input a number : ");
		scanf("%d", &userInput);

	int count = 10;

	while (count > 0){
	int result = userInput * count;
		printf("%d * %d = %d\n", userInput, count, result);

	count = count - 1;

	}



	return 0;
}
