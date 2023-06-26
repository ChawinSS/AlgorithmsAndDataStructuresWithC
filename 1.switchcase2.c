/*
   Write a simple program that obtains a number between score  
   and outputting the corresponding gardes (A-F).
 */
#include <stdio.h>
#include <stdlib.h>


int main(){
    int score;
    char grade;
    printf("\n\nWelcome to the program that tells you your grade \nBased in the number\n");
    printf("Please enter your number Grade : ");
    scanf("%d",&score);

    switch (score){
        case 0 ... 39:
            grade = 'F';
            break;
        case 40 ... 49:
            grade = 'D';
            break;
        case 50 ... 59:
            grade = 'C';
            break;
        case 60 ... 79:
            grade = 'B';
            break;
        case 80 ... 100:
            grade = 'A';
            break;
        

    }
    
    
    printf("\n - Your grade is: %c\n\n",grade);
    
}