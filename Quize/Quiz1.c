#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_LENGTH  6
#define RANDOM_MAX  49
#define RANDOM_MIN  1

// This is the file that holds all the 
#include "Quiz1.h"


int main(){
    //array to hold 6 numbers, pointer
    int basic[ARRAY_LENGTH], *numbers; 

    // generate number
    numbers = start_Random(basic);
    
    // print the unsorted array
    show_array(numbers); 	

    // sort the array in place
    numbers = Storting(numbers);

    // print the unsorted array
    show_array(numbers);

	return 0;
}








