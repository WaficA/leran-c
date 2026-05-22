/*
	for (initializationExpression; testExpression; updateExpression){
	// Code inside the for loop
}
*/

#include <stdio.h>


	int run_loop(void){
		for(int i = 0; i <= 10; i++){

			printf("%d \n", i);
	}
	return 0;
}

	int run_loop2(void){
		for(int i = 0; i < 5; i++){

			printf("testing loop print \n");
	}
	return 0;
}

	int run_loop_sum(void){
	int sum = 0;
		for(int i = 1; i <= 5; i++){
	sum = sum + i;
	}
			printf("%d\n", sum);
	return 0;
}

	int run_even_sum(void){
	int sum = 0;
		for(int i = 2; i <= 10; i = i + 2){
	sum = sum + i;
	}
			printf("%d\n", sum);
	return 0;
}

	int main (void){

		run_loop();
		run_loop2();
		run_loop_sum();
		run_even_sum();
	return 0;
}
