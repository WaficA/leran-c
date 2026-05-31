#include <stdio.h>

int main (void){

	int age = 20;
	printf(" Address of age : %p\n\n", (void*)&age);

	int* ptr;
	ptr = &age;
	printf(" Value stored in ptr is : %p = %p Adress of age\n\n", (void*)ptr, (void*)&age);

	//Print the value
	printf(" Value pointed to by ptr: %d\n\n", *ptr);

	//Change value using pointer
	*ptr = 30;
	printf(" Value pointed to by ptr: %d\n\n", *ptr);

	printf(" value of age after change : %d\n\n", age);

	return 0;
}
