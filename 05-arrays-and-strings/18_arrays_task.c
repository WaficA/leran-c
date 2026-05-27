/*	Create a program that computes the average marks of a student.
	- Create an array that scores the mark of 5 subjects.
	- Compute the total marks by adding all the marks.
	- Divide the total marks by the total number of subjects
	- Print the average marks.
*/
#include <stdio.h>


int scores[5];

int markSum(void){
	int sum = 0;
	for(int i=0; i<5; i++){
	sum = sum + scores[i];
	}
	return sum;
}

double calAvrg(void){
//	double average =(scores[0] + scores[1] + scores[2] + scores[3] + scores[4]) / 5.0;
//	return average;
	return (double)markSum() / 5.0;
}


int main (void){

	printf(" Enter the five marks of the student :\n");
	for (int i=0; i<5; i++){
	printf(" subject %d =", i + 1);
	scanf("%d", &scores[i]);
	}

	double average = calAvrg();

	printf(" Average Score is = %.2lf\n", average);

	return 0;
}
