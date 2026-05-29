/*	Create a program that takes your full name as input and prints your name back.
	Then, change the first of your name to x.
	- if your name is john Williams, it bacomes Xohn Williams
*/
#include <stdio.h>

char fullName[20];

void userInput(void){
	printf(" Enter your full name :");
	fgets(fullName, sizeof(fullName), stdin);
}


int main (void){
	userInput();
	printf(" User's full name is : %s\n", fullName);

	fullName[0] = 'X';
	fullName[6] = 'X';
	fullName[13] = 'X';
	printf(" As per task initial letter changed to x : %s\n", fullName);

	return 0;
}
