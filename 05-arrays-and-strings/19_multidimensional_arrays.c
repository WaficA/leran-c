/*	-Also known as array of arrays
	int arr[2][3];
*/

#include <stdio.h>

int arr[2][3] = {{1, 3, 5},{2, 5, 8}};

// Function to change elements inside arrays
void modifyArray(void){
	arr[1][2] = 10;
}

// Multi. Arrays and for loops

void multiLoop(void){
	for(int i=0; i<2; ++i){
	for(int j=0; j<3; ++j){
	printf(" Print the multi. array using for loop : %d\n", arr[i][j]);
		}
	}
}

int main (void){
	//Each element is associated with two index's.
	printf(" %d\n", arr[0][1]);
	printf(" Before change : %d\n", arr[1][2]);

	//Change elements using the index
	arr[1][2] = 7;
	printf(" 8 is now 7 after change : %d\n", arr[1][2]);

	modifyArray();
	printf(" 7 is now 10 after change using own function : %d\n", arr[1][2]);

	multiLoop();

	return 0;
}


