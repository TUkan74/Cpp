



#include "temps.h"
#include <stdio.h>
void print_line(int stars,int min){
	// which is bigger
	int end = (stars>0) ? stars : 0;
	for (int i=min;(i<=end);i++){
		//consecutive no_values 
		if (stars == no_value){
			goto novalue;
		}
		if (i>0){
			printf("*");
		}	
		if ((i<stars)&&(i<0)){
			printf(" ");
		}
		if (i>stars){
			printf("*");
		}
		novalue:
		if (i==0){
			printf("|");
		}	
	}
	printf("\n");
	return;
}

int find_min(const int array[],int len)
{
	int min=0;
	for (int i=0;i!=len;i++){
		if ((array[i]<min) && (array[i]!=no_value)){
			min = array[i];
		}
	}
	return min;
}	

int main(int argc, char **argv)
{
	//size of array
	int size_of_array = sizeof(temperatures) / sizeof(temperatures[0]);
	//find minimum of array
	int min = find_min(temperatures,size_of_array);
	//last valid
	int last = 0;
	//prints the result
	for (int i=0;i<size_of_array;i++){
		if (temperatures[i]==no_value){
			print_line(temperatures[last],min);
		}else{
			print_line(temperatures[i],min);
			last = i;
		}	
	}
	return 0;
}

