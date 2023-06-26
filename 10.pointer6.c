#include <stdio.h>

// Function prototype
void mysteryFunction1(int *, int);

int main()
{
	int x=10; //10
	int y = 2*x; //20

	printf("The value of x in main is =            %d\n", x);
	printf("The value of y in main is =            %d\n", y);

	mysteryFunction1(&x,y);  // address of x and value of y, which is 20 supplied to function
	
	printf("The NEW value of x in main after the MYSTRYFUNCTION1 call is = %d\n", x); //10*(-50) pass by reference
	printf("The NEW value of y in main after the MYSTRYFUNCTION1 call is = %d\n", y);// the value remain 20 not 420 becasue pass by value
	
	return 0;
}

// Function definition
void mysteryFunction1(int *intPtr, int w){//parameters from main function 
printf("\n");
	printf("The value of x from main function is = %d\n",*intPtr); //(accessed indirectly via intPtr) in mystryFunction1
	*intPtr *=-50;
	// printf("The value of x in mystryFunction1 is is = %5d\n",x);
	
	printf("The incoming value for w is =          %d\n",w); //y
	w *=21;
	printf("The NEW value for w is =               %d\n",w); //y
	printf("\n");
}
