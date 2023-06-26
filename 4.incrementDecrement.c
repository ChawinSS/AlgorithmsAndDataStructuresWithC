/*
   What would be the exact output of the code below.
*/
#include <stdio.h>

int main()
{
   int x=21, y = 2,z; 
   //float z;
   printf("x = %d, y = %d, and z = %d\n",x,y,z);

   // magical work
   z = /*(float)*/ x++/y-- + 10;
   printf("The new values are : x = %d, y = %d, and z = %d\n",x,y,z); //normally z=20.5 but because of vaurable type
	
	return 0;
}