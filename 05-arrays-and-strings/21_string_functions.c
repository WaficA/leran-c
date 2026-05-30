#include <stdio.h>
#include <string.h>	//header provides stslen

char basicString[50] = "programming tasks ";

//Since basicString is a fixed array we use sizeof
//char testCopy[sizeof(basicString)];

//hardcode size : WORKS HERE BUT BAD PRACTICE.
//char testCopy[18];

int main (void){

	printf("\n basicString : %s\n\n", basicString);

	// %zu : format specifier used to return the value of strlen function.
	printf(" Length of string : %zu\n\n", strlen(basicString));

	//Or we move inside the main and we can use strlen, +1 for we need one more byte.
	char testCopy[strlen(basicString) + 1];

	// strcpy(destination, source);
	strcpy(testCopy, basicString);
	printf(" Copied from basicString to testCopy : %s\n\n", testCopy);

	int result1 = strcmp(basicString, testCopy);
	printf(" strcmp before concat. : %d\n\n", result1);

	//strcat(destination, source);
	//destination appendsand takes in the content of source.
	strcat(basicString, testCopy);
	printf(" Concatenate :%s\n\n", basicString);

	//strcmp()
	int result2 = strcmp(basicString, testCopy);
	printf(" strcmp after concat. : %d\n\n", result2);
	return 0;
}


// NOTE ALL testCopy works
