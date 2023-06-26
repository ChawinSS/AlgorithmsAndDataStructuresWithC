#include <math.h>
double (float x){
	if (x>0){
		return (1 + 2*exp(2*x-4));
	}
	else{  
		if (x < 0)
			return 1/cosh(x);
		else
			return sin(x);
	}
}