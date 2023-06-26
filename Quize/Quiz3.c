#include <stdio.h>
#include <math.h>

#define SIZE 4
#define LOWER_LIMIT -2500
#define UPPER_LIMIT 2500
#define TOTAL_UNIT 5000
#define INCREMENT 1250

#include "Quiz3.h"

int main()
{
	float arr[SIZE],*numbers;

    // generate number
    numbers = start_Random(arr);
    
    // print the unsorted array
    show_array(numbers); 	

	return 0;
}