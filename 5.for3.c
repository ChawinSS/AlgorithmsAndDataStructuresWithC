#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Write a C program that takes at most 10 numbers from a user,
// stores them into an array first, then finds sum of all numbers,
// the minimum and the maximum of those number entered. Finding min, max,
// and sum of all numbers must be done via separate functions.
// The expected output is as follows:

int main(){
    float total, min, max, numbers[10];

    printf("\nWelcome to the program\n");
    printf("These program will ask you for numbers and do some simple operations\n");

    for(int i=1;i<=10;i++){
        printf("Please entter the numbers %d : ",i);
        scanf("%f",&numbers[i]); //input test 1,2,3,4,5,6,7,8,9,10
        
        total += numbers[i];
    }

    min=numbers[0];//1 for the test
    max=numbers[0];//1 for the test

    for(int i=0;i<10;i++){
        if(numbers[i]>max){
            max=numbers[i];
        }
        if(numbers[i]<min){
            min=numbers[i];
        }
    }
    printf("\nThe array compose of: ");
    for(int i=0;i<10;i++){printf("%.0f, ",numbers[i]);}
    printf("\nMax number is %.0f \n",max);
    printf("Min number is %.0f \n",min);
    printf("Total number is %.0f \n",total);
}
