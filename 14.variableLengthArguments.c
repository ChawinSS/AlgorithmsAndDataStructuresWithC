#include <stdio.h>
#include <stdarg.h>

// function with variable-length argument list
int product( int i, ... );

int main( void ){ 
   int a = 1; // values to multiply
   int b = 2;
   int c = 3;
   int d = 4;
   int e = 5;
printf("\n");
   // display integer values
   printf( "%s%d, %s%d, %s%d, %s%d, %s%d\n", "a = ", a, "b = ", b, "c = ", c, "d = ", d, "e = ", e );
printf("\n");
   // call product with different number of arguments in each call
   printf( "%s%d\n%s%d\n%s%d\n%s%d\n", "The product of a and b is: ", 
       product( 2, a, b ), "The product of a, b, and c is: ",
       product( 3, a, b, c ), "The product of a, b, c, and d is: ",
       product( 4, a, b, c, d ), "The product of a, b, c, d, and e is: ",
       product( 5, a, b, c, d, e ) 
      );
} // end main

// products integers passed as arguments
int product( int i, ... ){ 
   int total = 1;       // product of integers
   int j;               // loop counter
   va_list ap;          // variable-length argument list

   va_start( ap, i );   // invoke macro to access arguments

   // calculate total
   for ( j = 1; j <= i; ++j ) {
      total *= va_arg( ap, int );
   } // end for

   va_end( ap ); // perform termination housekeeping

   return total; // return product of arguments
} // end function product