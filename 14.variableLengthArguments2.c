/* Write a program that obtains from the command line number of integers and computes
   the average of them for now. The number of integers can vary. 
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

// function prototype
int findFactorial(int i, ...);

int main(int argc, char const *argv[])
{
	
	printf("The facotrial of 1 is = %d\n", findFactorial(1, 1));
	printf("The facotrial of 2 is = %d\n", findFactorial(2, 1,2));
	printf("The facotrial of 3 is = %d\n", findFactorial(3, 1,2,3));
	printf("The facotrial of 5 is = %d\n", findFactorial(4, 1,2,3,4));
	printf("The facotrial of 6 is = %d\n", findFactorial(5, 1,2,3,4,5));
	return 0;
}


// function definition
int findFactorial(int i, ...){
  int product=1;
  va_list ap;
  va_start(ap,i);
  for (int j = 1; j<=i;++j)
	  product *=va_arg(ap,int);
  va_end(ap);
  return product;
};