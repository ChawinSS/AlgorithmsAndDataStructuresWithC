/* Write a program that obtains from the command line number of integers and computes
   the average of them for now. The number of integers can vary. 
 */

 #include <stdio.h>
 #include <stdlib.h>

int main()
{
	
	int sum=0, x,y,z;
	printf("please enter numbers");
	scanf("%d%d%d",&x,&y,&z);
	sum = x+y+z;

	printf("The average is %7.3f\n", (float) sum/3);

	return 0;
}
