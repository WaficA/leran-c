/*
	while (conditin){
	// statment inside while
}

	do {
	// body of loop
}while(condition);

*/

#include <stdio.h>

int main (void) {

	int entry;
		printf(" choose number 1 to 5 :");
		scanf("%d", &entry);

	while (entry < 5){
		printf("\n while loop\n");
		printf(" count = %d\n", entry);
	entry = entry + 1;
	}

	int entry2;
		printf(" choose any number =");
		scanf("%d",&entry2);

	int count = 1;

	while (count <= 10){
	int result = entry2 * count;
		printf("%d*%d = %d\n", entry2 , count, result);
	count = count + 1;

	}

	int entry3;
		printf(" choose number 1 to 5 : ");
		scanf("%d", &entry3);

	do {
		printf("%d\n", entry3);
		printf(" count = %d\n",entry3);
		entry3 = entry3 + 1;
	} while(entry3 < 5);

	return 0;
}
