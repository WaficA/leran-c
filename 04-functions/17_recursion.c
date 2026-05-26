/* A function that calls itself is called a recursion
	A recursion results in infinite call execution so we used an if statment.
void recurse(){
...
	if(condition){
	...
	}
	else{
	recurse();
	}
	...
}

*/
#include <stdio.h>

int sum(int n){
	if (n != 0){
	return n + sum(n-1);
	}
	else{
	return n;
	}

}


int main (void){

	int number, result;

	printf(" Enter a positive integer :");
	scanf("%d", &number);

	result = sum(number);

	printf(" Sum = %d\n", result);

	return 0;
}
