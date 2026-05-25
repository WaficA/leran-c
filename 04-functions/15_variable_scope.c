#include <stdio.h>

//local scope
int addNumbers(int num1, int num2){
	int result = num1 + num2;
	return result;
}

//global scope
int resultGlobal;

int subNumbers(int num1, int num2){
        resultGlobal = num1 - num2;
        return resultGlobal;
}


int main (void){

	int sum = addNumbers(5, 6);
	printf(" (5+6) Result = %d\n", sum);

	subNumbers(5, 6);
	printf(" (5-6) Result = %d\n", resultGlobal);

	return 0;
}
