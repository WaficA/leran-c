/*
	if (test_condition){
	  	// body of if statment
	}
	else {
		// statment inside else body
	}
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{

	int age;

		printf(" Enter your age: ");
		scanf("%d", &age);

	if (age == 0 || age < 0 ){
		printf(" Entry not accepted \n");
 }

	else if (age < 18) {
		printf(" Come back when you are of age!! \n");
 }

	else if (age >= 90 ) {
		printf(" Holly You still wth us! Welcome. \n");
 }

	else if(age >=18 ){
		printf( " You are eligibale \n");
}
	else {
		printf(" Error in entry \n");
 }
	return 0;

 }
