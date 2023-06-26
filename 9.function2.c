/*
  Write a function that computes the factorial of a given integer number. 
  Test your function in at least three different ways via a program. 
   a) Write the prototype and the body of your function before the 
      main function 
   b) Write the prototype of your function before the main function 
      and the body of the function after the main function
   c) Write you function into a header file and call this header 
      file in your main program

   Answer part b) is below. 
*/

#include <stdio.h>

unsigned long factorial(int); // prototype of the function


int main(int argc, char const *argv[])
{

   printf("Enter a number to compute factorial \n");
   int x;
   scanf("%d",&x);
   printf("The factorial of x=%d! is = %lu\n",x,factorial(x));
   
	return 0;
}

// Definition of the function (Function body)
unsigned long factorial(int n){
   unsigned long fct = 1;
   for(int i = 2; i<=n; i++)
      fct *=i;
   return fct;
}