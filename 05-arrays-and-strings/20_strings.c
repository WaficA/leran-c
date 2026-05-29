#include <stdio.h>

char str[] = "shadow";
char str2[] = {'s','h','a','d','o','w','\0'};

char name[20];

void userInput(void){
	printf(" Enter name :");

	//scanf will terminate when it encounters a white space
//	scanf("%s", name);

	//fget will take in whitespace
	fgets(name, sizeof(name), stdin);
}


int main (void){

	//str[5] access the elemt. while logic error str[2] is '\0'.
	printf("%c, %c\n", str[5], str2[6]);

	//print character at selected index
	printf("%c, %c\n", str[4], str2[5]);

	//print the string
	printf("%.6s %s\n", str, str2);

	userInput();
	printf(" User name is : %s\n", name);

	name[0] = 'W';
	name[4] = 'K';
	printf(" character changed : %s\n", name);

	return 0;
}
