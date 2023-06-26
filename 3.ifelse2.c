/*
   WWrite a simple program that obtains a number from a 
   user and outputs only one options below. Assume the number entered is x.
	X is positive and even
	X is positive and odd
	X is negative and even
	X is negative and odd
	X is zero
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	/* code */
	int aNumber; 
	printf("Please enter a  number between for which I check sign and odd/even casee\n");
	scanf("%d",&aNumber);

	if (aNumber > 0){
		if(aNumber%2 == 0)
			printf("%d is positive and even\n", aNumber);
		else	
			printf("%d is positive and odd\n", aNumber);
	} else{
		if (aNumber < 0 ){
			if(aNumber%2 == 0)
				printf("%d is negative and even\n", aNumber);
			else	
				printf("%d is negative and odd\n", aNumber);
	   }else
		    printf("You must be jocking. You have zero\n");
	}
	return 0;
}