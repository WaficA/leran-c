// break;		immediatly terminates the loop when encountered
// continue;		skips the current iteration and continue

#include <stdio.h>

int test_break(void){

	for(int i = 1; i <= 5; i++){

		printf("%d\n", i);
	break;
		printf("testing break this should not be outputed");
	}

	return 0;
}

int brkk(void){

	while(1){
	int number;
		printf("choose an even number :");
		scanf("%d", &number);

	if (number % 2 !=0 || number == 0){
	break;
		}
	}
	return 0;
}

int cont_test(void){

	for (int i = 1; i<=5; i++){
	if (i == 3){

	continue;
		}
		printf("%d\n", i);
	}
	return 0;
}

int con_break(void){

	while(1){
	int number;
		printf("choose a number:");
		scanf("%d", &number);

	if (number <= 0){
	break;
		}

	if (number % 2 !=0 || number == 0){
	continue;
		}
		printf("only even numbers would be ouputed : %d\n odds will be neglected.\n zero and negative will end the program.\n",number);
	}
	return 0;
}

int main (void){

	test_break();
	brkk();
	cont_test();
	con_break();
	return 0;
}
