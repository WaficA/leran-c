#include <stdio.h>

int main () {

double number;
char alphabet;

printf("enter double input: ");
scanf("%lf", &number);

printf("enter the character: ");
scanf("\n%c", &alphabet);

printf("\nNumber: %lf", number);
printf("\nCharacter: %c\n", alphabet);

return 0;


}
