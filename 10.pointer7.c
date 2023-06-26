#include <stdio.h>
#include "10.pointer7.h"


//Function prototype
void mysteryFunction1(int *, int);
void mysteryFunction2(int *, int);
void mysteryFunction3(int *);

int y;

int main()
{
	int x=10;
	y = 2*x;

	printf("The value of x in main is = %10d\n", x);
	printf("The value of y in main is = %10d\n", y);
	printf("\n");
	mysteryFunction1(&x,y);  // address of x and value of y, which is 20 supplied to function
	printf("\n");
	mysteryFunction2(&x,y);  // address of x and value of y, which is 20 supplied to function
	printf("\n");
	mysteryFunction3(&x);  // address of x and value of y, which is 20 supplied to function
	printf("\n");

	printf("The NEW value of x in main after the MYSTRYFUNCTION call is = %10d\n", x);
	printf("The NEW value of y in main after the MYSTRYFUNCTION call is = %10d\n\n", y);
	
	return 0;
}

