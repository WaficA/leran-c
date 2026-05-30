/*	Create a program to compare two strings and print the larger string.
	- Get two string input from the user using fgets()
	- Compare the length of both the strings using strlen()
	- Print the larger string
*/

#include <stdio.h>
#include <string.h>

char string1[50];
char string2[50];

void userInput(void){
	printf(" Enter first string :");
	fgets(string1,sizeof(string1),stdin);
	//strcsp used to clean the string after fgets
	string1[strcspn(string1, "\n")] = '\0';

	printf(" Enter second string :");
	fgets(string2,sizeof(string2),stdin);
	string2[strcspn(string2, "\n")] = '\0';

}

void lenComp(void){
	if(strlen(string1) > strlen(string2)){
	printf(" First string length = %zu\n Second string length = %zu\n The longer string is :%s\n", strlen(string1), strlen(string2), string1);
	}else if(strlen(string1) < strlen(string2)){
	printf(" First string length = %zu\n Second string length = %zu\n The longer string is :%s\n", strlen(string1), strlen(string2), string2);
	}else if(strlen(string1) == strlen(string2)){
	printf(" First string length = %zu\n Second string length = %zu\n Equal strings : %s = %s\n", strlen(string1), strlen(string2), string1, string2);
	}

}



int main (void){

	userInput();
	lenComp();

	return 0;
}
