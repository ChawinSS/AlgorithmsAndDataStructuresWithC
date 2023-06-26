/*
Demonstrartion of type casting before and after.
 */
#include<stdio.h>
int main (){
    int x;
    int b= 3,z= 2;
float y;

x=b/z;
y=b/z;

printf("\nWithout type casting \nx = %d, y = %.1f\n",x,y);

// to have the correct result for y we need TYPE CASTING

y = (float) b/z; //We want to cast vaiable type int, input data, to float so do y varaible

printf("\nWith type casting \nx = %d, y = %.1f\n\n",x,y);

    return 0;
}