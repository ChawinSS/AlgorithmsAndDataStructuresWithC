#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_LENGTH  1000
#define RANDOM_MAX  49
#define RANDOM_MIN  1

// This is the file that holds all the 
#include "Quiz2.h"

int main(){

    //array to hold 6 numbers, pointer
    int basic[ARRAY_LENGTH], *numbers;

    // generate number
    numbers = start_Random(basic);
    
    // print the unsorted array
    //show_array(numbers); 	

    min(numbers);

    max(numbers);

    //start time measurement of the whole running time
    long total_time_before=clock();

    avg(numbers);

    //end time measurement of the running time after whole
    long total_time_after=clock();  
    
    //total time varibel and cast them to (double) formular: (after-before)/CLOCKS_PER_SEC
    double total_time=(double)(total_time_after-total_time_before)/CLOCKS_PER_SEC; 

    printf("\nTotal time using in program %f seconds\n\n",total_time);

	return 0;
}








