#include <stdio.h>
#include <stdbool.h>

int main(void)
{

	bool valueA = true;
	bool valueB = false;

		printf(" true = %d\n",valueA);
		printf(" false = %d\n",valueB);

// comparison operators
/*
>	Greater than
<	Lesser than
==	Equal to
>=	Greater than or equal to
<=	Lesser than or equal to
!=	Not equal to
*/

	bool greater = (12>9);
	bool lesser = (9<12);
	bool equalTo = (9==9);
	bool notequal = (9!=9);
	bool lessequal = (12<=54);
	bool greatequal = (45>=99);

		printf(" (12>9) = %d\n",greater);
		printf(" (9<12) = %d\n",lesser);
		printf(" (9==9) = %d\n",equalTo);
		printf(" (9!=9) = %d\n",notequal);
		printf(" (12<=54) = %d\n",lessequal);
		printf(" (45>=99) = %d\n",greatequal);

// comparing variables
// will use >for eg. all others work the same

	int valueC = 9;
	int valueD = 10;

	bool variables = (valueC > valueD);

		printf(" comparing variables : %d\n",variables);

// logical operators
/*
&&	AND
||	OR
!	NOT
		**will use the && for eg. the others are just simple logic
*/

	int age = 19;
	double height = 6.3;

	bool check = (age>18) && !(height>6.0);

		printf(" age and height check = %d\n",check);


	return 0;
}
