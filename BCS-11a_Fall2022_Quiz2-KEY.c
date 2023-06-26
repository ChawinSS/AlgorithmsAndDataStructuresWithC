#include <stdio.h>                        
#include <stdlib.h>                      
#include <time.h>                         
#include "BCS-11a_Fall2022_Quiz2-KEY.h"  

// Constants
const int SIZE = 1000;


int main(int argc, char *argv[]) {

    // define an array to hold 1000 numbers
    int numbers[SIZE];

    // Generate numbers 
    generateArray(numbers, SIZE);

    // find minimum of the numbers
    int min = findMin(numbers, SIZE);

    // find maximum of the numbers
    int max = findMax(numbers, SIZE);

    // start the clock to record the begining time
    clock_t strttime = clock();

    // compute the average of numbers
    float avg = computeAverage(numbers, SIZE);

    // stopt the clock to record the ending time
    clock_t stptime = clock();

    // Compute the time elapsed between the function call and function return clock times
    double elapsed_time = ((double)(stptime - strttime) / CLOCKS_PER_SEC ) * 1000000;

    //Display the results
    printf("minimum: \t%d\n",min);
    printf("maximum: \t%d\n",max);
    printf("average: \t%g\n",avg);
    printf("avg time: \t%.3f micro seconds\n",elapsed_time);

    return 0;
}
