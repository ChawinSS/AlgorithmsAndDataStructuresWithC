#include <stdio.h>

// Pointer scope pass by value
void mysteryFunction1( int);

int main()
{
	int x=10; //10
	int y = 2*x; //20

	printf("\nThe value of y in main is = %d\n", y);

	mysteryFunction1(y);  // value of y, which is 20 supplied to function
	
	printf("The NEW value of y in main after the MYSTRYFUNCTION1 call is = %d\n", y);// the value remain 20 not 420 becasue pass by value
	
	return 0;
}

// Function definition
void mysteryFunction1( int w){//parameters from main function 

	printf("\n");
	printf("The incoming value for w is mysteryFunction1= %d\n",w); //y
	w *=21;
	printf("The NEW value for w is mysteryFunction1= %d\n",w); //y
	printf("\n");
}
