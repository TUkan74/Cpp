
#include "temps.h"
#include <stdio.h>
void printLine(int stars, int min) {
	// which is bigger
	int end = (stars < 0) ? stars : 0;
	//negative numbers
	for (int i = min; i < end; i++) {
		printf(" ");
	}
	for (int i = stars; i < 0; i++) {
		printf("*");
	}
	//print zero
	printf("|");
	//positive numbers
	for (int i = 0; i < stars; i++) {
		printf("*");
	}

	printf("\n");
	return;
}

void printWhole(int teploty[], int minimal, int len) {
	
}

int find_min(int array[], int len) {
	int minimum = 0;
	for (int i = 0; i != len; i++) {
		if ((array[i] < minimum) && (array[i] != no_value)) {
			minimum = array[i];
		}
	}
	return minimum;
}

void replace(int teploty[], int len) {
	int last = 0;
	for (int i = 0; i != len; i++) {
		if (temperatures[i] == no_value) {
			teploty[i] = last;
		}
		else {
			teploty[i] = temperatures[i];
		}
		last = teploty[i];
	}
}

int main(int argc, char** argv)
{
	//size of array
	constexpr int size_of_array = sizeof(temperatures) / sizeof(temperatures[0]);
	int teploty[size_of_array];
	//replace no_value
	replace(teploty, size_of_array);
	//find minimum of array
	int minimal = find_min(teploty, size_of_array);
	//print the temperatures
	for (int i = 0; i != size_of_array; i++) {
		printLine(teploty[i], minimal);
	}


	return 0;
}

