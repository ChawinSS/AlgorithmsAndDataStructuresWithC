/* Write a program that obtains from the command line number of integers and computes
   the average of them for now. The number of integers can vary. 
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

// function prototype
int findProduct(int i, ...);

int main(int argc, char const *argv[])
{
	
	printf(" 2 to the power 1 is = %d\n", findProduct(1, 2));
	printf(" 2 to the power 2 is = %d\n", findProduct(2, 2,2));
	printf(" 2 to the power 3 is = %d\n", findProduct(3, 2,2,2));
	printf(" 2 to the power 4 is = %d\n", findProduct(4, 2,2,2,2));
	printf(" 2 to the power 5 is = %d\n", findProduct(5, 2,2,2,2,2));
	return 0;
}


// function definition
int findProduct(int i, ...){
  int product=1;
  va_list ap;
  va_start(ap,i);
  for (int j = 1; j<=i;++j)
	  product *=va_arg(ap,int);
  va_end(ap);
  return product;
};