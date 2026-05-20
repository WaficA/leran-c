/*

switch(variable/expresion) {

	case value1:
		// body of case
		break;

	case valueN:
		//body of case
		break

	default:
		// body of default

}

*/

#include <stdio.h>

int main (void){

	int number;
		printf(" Choose a number 1 to 7 : ");
		scanf(" %d", &number);

	switch (number){
		case 1:
			printf(" monday\n");
		break;

		case 2:
			printf(" Tuesday\n");
		break;

		case 3:
			printf(" wednsday\n");
		break;

		case 4:
			printf(" thursday\n");
		break;

		case 5:
			printf(" friday\n");
		break;

		case 6:
			printf(" saturday\n");
		break;

		case 7:
			printf(" sunday\n");
		break;

		default:
			printf(" Make sure you choose from 1 to 7 \n");

}
	switch (number){

	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
			printf(" This is a working day \n");
	break;

	case 6:
			printf(" Half working day \n");
	break;

	case 7:
			printf(" This is an off day \n");
	break;
}

	return 0;

}
