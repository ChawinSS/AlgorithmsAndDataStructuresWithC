//pointer int exsample
#include <stdio.h>

int main()
{
	int x=10; //variable declaration
	int *xPtr; //pointer varaible declaration
	xPtr = &x; //pointer point to xvaraible

	printf("\n The content of x:                 %d\n",x); //value 10
	printf(" The Address of x:     %p\n",&x); //x address 0x7ff7b505a608

	printf(" The content of xPtr:  %p\n",xPtr); //xPtr point at x address 0x7ff7b505a608
	printf(" The address of xPtr:  %p\n",&xPtr); //address of xPtr 0x7ff7b505a600

	printf(" The content of x through Pointer: %d\n",*xPtr); //value through xPtr 10
	printf("\n----------------------------------------------------------------------");
	
	//Let change the content of x
	*xPtr = 1121; 	// changes value of x trought pointer to 1121

	printf("\n\n The NEW content of x in main (changed indirectly) is = %5d\n\n", x);

		
	return 0;
}
