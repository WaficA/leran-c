/*	Create a program to change the value of a variable using a pointer.
	- Get input for a double variable salary
	- Assign the address of salary to a double pointer

	Now use the pointer to:
	- print the value of salary
	- increase the salary by 2 times
	- print the new salary
*/
#include <stdio.h>


double userInput(void){
	double salary;
	printf("\n Whats your current salary? :");
	scanf("%lf", &salary);

	double* ptr = &salary;
	printf("\n Salary input by user is : %.4lf\n\n", *ptr);

//	*ptr = salary*2;
//	*ptr = *ptr*2;
	*ptr *= 2;
	printf(" New salary allocated is : %.4lf\n\n", *ptr);

	//Added question print out the address of salary & ptr.
	printf(" Address of the value of salary is : %p | Address of ptr : %p\n\n", (void*)&salary, (void*)&ptr);

	return salary;
}


int main (void){

	userInput();

	return 0;
}
