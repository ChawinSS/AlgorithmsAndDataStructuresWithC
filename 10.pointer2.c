#include <stdio.h>

int main()
{

	float y = 2.5; //variable declaration
	float *yPtr;  // float y = 2.5, *yPtr = &y; //pointer varaible declaration
	yPtr = &y;//pointer point to xvaraible


	printf("\n The content of y:               %7.3f\n", y);
	printf(" The Address of x:           %p\n", &y);
	printf(" The content of xPtr:        %p\n", yPtr);
	printf(" The address of xPtr:        %p\n", &yPtr);
	printf(" The content of x through Pointer: %f\n", *yPtr);
	printf("\n----------------------------------------------------------------------");	

	// Let change the content of y indirectly
	*yPtr = 0.0001;	// changes value of y to 0.0001

	printf("\n\n The NEW content of x in main (changed indirectly) is = %9.6f\n", y);

		
	return 0;
}