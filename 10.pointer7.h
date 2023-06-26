// Function definition
extern int y;

void mysteryFunction1(int *intPtr, int w){
	printf("The value of x (accessed indirectly via intPtr) in mystryFunction1 is is = %5d\n",*intPtr);
	*intPtr *=-50;
	// printf("The value of x in mystryFunction1 is is = %5d\n",x);
	
	printf("The incoming value for w is = %5d\n",w);
	w *=21;
	printf("The NEW value for w is = %5d\n",w);
	printf("\n");
}


// Function definition
void mysteryFunction2(int *intPtr, int y){
	printf("The value of x (accessed indirectly via intPtr) in mystryFunction2 is is = %5d\n",*intPtr);
	*intPtr *=-50;
	// printf("The value of x in mystryFunction2 is is = %5d\n",x);
	
	printf("The incoming value for y is = %5d\n",y);
	y *=21;
	printf("The NEW value for y is = %5d\n",y);
}

// Function definition
void mysteryFunction3(int *intPtr){
	printf("The value of x (accessed indirectly via intPtr) in mystryFunction3 is is = %5d\n",*intPtr);
	*intPtr *=-50;
	
	printf("The  value (if accessible in mysteryFunction3) for y is = %5d\n",y);
	y *=21;
	printf("The NEW value if accessible in mysteryFunction3) for y is = %5d\n",y);
	printf("\n");
}