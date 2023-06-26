#include <stdio.h>

void mysteryF(int *, float *);


int main(int argc, char const *argv[])
{
	int x=10; //variable declaration
	int *xPtr; //pointer varaible declaration
	xPtr = &x; //pointer point to xvaraible


	float y = 2.5;
	float *yPtr;  // float y = 2.5, *yPtr = &y;
	yPtr = &y;

	printf("The content of x in main is = %5d\n", x);
	printf("The address of x (shown as &x) in main is = %p\n", &x);
	printf("The content of xPtr in main is = %p\n", xPtr);
	printf("The address of xPtr (shown as &xPtr) in main is = %p\n", &xPtr);
	printf("The content of the address pointed by xPtr (shown as *xPtr) in main is = %d\n", *xPtr);
	
	printf("\n\nThe content of y in main is = %7.3f\n", y);
	printf("The address of y (shown as &y) in main is = %p\n", &y);
	printf("The content of yPtr in main is = %p\n", yPtr);
	printf("The address of yPtr (shown as &yPtr) in main is = %p\n", &yPtr);
	printf("The content of the address pointed by yPtr (shown as *yPtr) in main is = %f\n", *yPtr);
	

	// Let us change the content of x and y indirectly
	*xPtr = 1121; 	// changes value of x to 1121
	*yPtr = 0.0001;	// changes value of y to 0.0001

	printf("\n\n The NEW content of x in main (changed indirectly) is = %5d\n", x);
	printf("\n\n The NEW content of x in main (changed indirectly) is = %9.6f\n", y);

		
	return 0;
}


// 
void mysteryF(int *, float *);