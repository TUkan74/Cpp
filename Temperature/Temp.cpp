



#include "temps.h"
#include <stdio.h>
void print_line(int stars,int min,char x){
	// which is bigger
	//int end = (stars>0) ? stars : 0;
	for (int i=min;(i<=0);i++){
		 
		
	}
	printf("\n");
	return;
}

int find_min(const int array[],int len){
	int minimum=0;
	for (int i=0;i!=len;i++){
		if ((array[i]<minimum) && (array[i]!=no_value)){
			minimum = array[i];
		}
	}
	return minimum;
}

void replace(int array[], int len) {
	int last = 0;
	for (int i = 0; i != len; i++) {
		if (array[i] == no_value) {
			array[i] = last;
		}else {
			last = array[i];
		}
	}
}

int main(int argc, char **argv)
{
	//size of array
	int size_of_array = sizeof(temperatures) / sizeof(temperatures[0]);
	//find minimum of array
	constexpr min = find_min(temperatures,size_of_array);
	//replace no_value
	replace(temperatures,size_of_array);
	//prints the result
	for (int i=0;i<size_of_array;i++){
		
	}
	return 0;
}

