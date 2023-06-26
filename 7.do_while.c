/*
   Write a simple program that uses the DO-WHILE LOOP to print numbers, 
   which are divisible by 2 and 3 between 1 and 20 inclusive.
   Goals:
   1. To test the knowledge of AND and OR operators
   2. To test the knowlede of loops and their counterparts
   3. To teach/show the use of two important reservered words: continue & break
	
	This program is the most basic for loop to start with.
*/

#include <stdio.h>

int main()
{

   int i=1;
	
	//do-while loop
	do{
		if((i%2 == 0) && (i%3 ==0)){
			printf("%d\n", i);
		} 
		++i;
	} while (i<=20); 

	return 0;
}