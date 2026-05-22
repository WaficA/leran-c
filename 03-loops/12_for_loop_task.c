/*
 Use the for loop to compute the sum of the oddnumbers from 1 to 100.

 For each itiration, we need to add an odd number to the sum.

 sum = Sum + 1
 sum = Sum + 3
.
.
.
 sum = sum + 99
*/

#include <stdio.h>


int odd_sum(int limit){
	int sum = 0;
	for(int i = 1; i <= limit; i = i + 2){
	sum = sum + i;

	}
		printf("%d\n", sum);
	return 0;
}

int main (void){

	int limit;

		printf("choose a num, prog. will add the odds : ");
		scanf("%d",&limit);
	odd_sum(limit);

	return 0;
}
