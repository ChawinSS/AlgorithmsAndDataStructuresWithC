#include <stdio.h>
#include <math.h>
#include "BCS-11a_Fall2022_Quiz3-KEY.h"

#define SIZE 8*250
#define LOWER_LIMIT = -2500
#define UPPER_LIMIT = 2500

int main(int argc, char const *argv[])
{
	double numbers[SIZE];
	float x= LOWER_LIMIT;
	for(int i = 0; i< SIZE; i++){
		x +=1/4;
		numbers[i] = mathFunction(x);
	}
	return 0;
}