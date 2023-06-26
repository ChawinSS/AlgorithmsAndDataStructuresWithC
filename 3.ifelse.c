#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int grade,mult,input;
    double y;
    printf("\nWelcome to the Calculation function Program\n");
    printf("Please enter your number : ");
    scanf("%d",&input);
    
    if (input > 0){
        
        mult = (2*input)-4;
        
        y = (double) 1+ 2*exp(mult);     //1+2e^2x-4

    }else if (input == 0){
        y = (double) sin(input);    //sin(x)

    }else if (input < 0){
    y = (double) (1 / cosh(input));    // 1/cosh(x)
    }
    
    printf("The number is: %lf\n",y);
}