//	datatype arrayname[arraySize];
#include <stdio.h>
// int age[5];		this will only take 5 values.
// int age[5] = {25, 29, 32, 16, 20};		{these are called array elements}
// int age2[] = {15, 26, 40, 35, 22};		[] omitted the size the compiler will determine the size of array
// int age3[5] = {15, 26, 40, 35};		{15, 26, 40, 35, 0} the remaining is defaulted to 0
//	Array index starts from 0, so first element is at 0
int age[5] = {21, 29, 32, 16, 20};

// Assign value using index number

int age2[5];

void initializerAge2(void){

	age2[0] = 21;
	age2[4] = 30;

}

int getAValue(int index){
	int value[5] = {1, 2, 3, 4, 5};

	return value[index];
}

int main(void){


	int age3[3];
	printf(" Enter three numbers : ");
	scanf("%d", &age3[0]);
	printf(" Enter second numbers : ");
        scanf("%d", &age3[1]);
	printf(" Enter third numbers : ");
        scanf("%d", &age3[2]);

	printf(" Entries where %d %d %d\n", age3[0], age3[1], age3[2]);


	initializerAge2();

	age2[1]= getAValue(1);
	age2[2]= getAValue(2);
	age2[3]= getAValue(3);

	printf("%d\n", age[1]);
	printf("%d\n", age2[0]);
	printf("index number 0 = %d\n", age2[1]);
	printf("%d\n", age2[2]);
	printf("%d\n", age2[3]);
	printf("%d\n", age2[4]);

	age2[0] = 200;
	printf("index number 0 = %d\n", age2[0]);


	int age5[5];

	for (int i = 0; i < 5; ++i){
	scanf("%d", &age5[i]);
	}

	for (int i = 0; i<5; ++i){
	printf("%d\n", age5[i]);
	}


//Index out of bound error.
	for (int i = 0; i<6; ++i){
        printf("%d\n", age5[i]);
        }

	return 0;
}

