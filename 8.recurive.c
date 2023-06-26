/* A demo or recurive funcion */

#include <stdio.h>

long unsigned recFactorial(int n); 

int main()
{
	printf("The factorail of 6 is %ld\n", recFactorial(6));
	return 0;
}

long unsigned recFactorial(int n){
	if (n <=1)
		return 1;
	else
		return n*recFactorial(n-1);//6*(5*(4*(3*(2*(1)))))
}