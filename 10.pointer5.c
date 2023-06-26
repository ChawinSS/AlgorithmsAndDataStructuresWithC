//pass by reference
#include <stdio.h>

// Function prototype
void mysteryFunction1(int *);

int main()
{
	int x=10; //10

	printf("The value of x in main is =            %d\n", x);

	mysteryFunction1(&x);  // address of x, which is 20 supplied to function
	
	printf("The NEW value of x in main after the MYSTRYFUNCTION1 call is = %d\n", x); //10*(-50) pass by reference
	
	return 0;
}

// Function definition
void mysteryFunction1(int *intPtr){//parameters from main function 
printf("\n");
	printf("The value of x from main function is = %d\n",*intPtr); //(accessed indirectly via intPtr) in mystryFunction1
	*intPtr *=-50;

	printf("\n");
}
