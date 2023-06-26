/*display number between 1-20 that can divided by 2 and 3 and have no fraction
the result is 6, 12, 18
using Modulus operation "%"*/

#include <stdio.h>

int main()
{

   int i;
	
	//for loop
	for (i = 1; i<=20;++i){
		if((i%2 == 0) && (i%3 ==0)){
			printf("%d\n", i);
		} // end of if statement
	} // end of for loop
	return 0;
}