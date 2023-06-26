#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Printing function
void show_array(float numbers[]){

    printf("\nData for ploting:\n");
    for (int z = 0; z<SIZE; z++){
        printf(" x%d): %.2f\n",z+1,numbers[z]);
    }
    printf("\n");
}

float *start_Random(float *n){
	float x= LOWER_LIMIT;
    for (int i = 0; i < SIZE; i++){
		x +=INCREMENT;
		if (x>0) { 
			x = ( 1 + 2*exp(2*x-4));
			n[i] = x;
			}
    	
		else if (x == 0) {
			 x = (sin(x));
			 n[i] = x;
			 }

		else if (x < 0){ 
			x = (1 / cosh(x));
			n[i] = x;
			}
	
		n[i] = x;
    }
    return n;

}
