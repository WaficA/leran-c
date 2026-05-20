/*
	Use the switch statmnet to create a program that will find the month based on the number input.
	Take the input number from 1 to 12. And, print the corresponding month based on the input value.
	-If number is 1, print January.
	-If number is 3, print march, and so on.
*/

#include <stdio.h>

int main (void){

	int entry;
		printf(" Enter number coice 1 to 12 : ");
		scanf(" %d", &entry);

	switch (entry){
	case 1:
		printf(" January \n");
	break;

	case 2:
		printf(" February \n");
	break;

	case 3:
		printf(" March \n");
	break;

	case 4:
		printf(" April \n");
	break;

	case 5:
		printf(" May \n");
	break;

	case 6:
		printf(" June \n");
	break;

	case 7:
		printf(" July \n");
	break;

	case 8:
		printf(" Agust \n");
	break;

	case 9:
		printf(" Septrember \n");
	break;

	case 10:
		printf(" October \n");
	break;

	case 11:
		printf(" November \n");
	break;

	case 12:
		printf(" December \n");
	break;


	default:
		printf(" Error in entry \n");

}


	return 0;
}
