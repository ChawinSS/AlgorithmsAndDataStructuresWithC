/*
   Write a simple program that obtains a number between 1 and 7 
   inclusive and outputting the corresponding day name. Monday 
   is 1, Tuesday is 2, ……, Sunday is 7. If user enters a number 
   outside the range 1 to 7, do warn the user about invalid day 
   number. 
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number_day; // to store day number provided
	printf("\nPlease enter a number between 1 and 7 inclusive: ");
	scanf("%d",&number_day);

	switch(number_day){
		case 1: printf(" - The day corresponding to %d is Monday\n\n", number_day); break;
		case 2: printf(" - The day corresponding to %d is Tuesday\n\n", number_day); break;
		case 3: printf(" - The day corresponding to %d is Wednesday\n\n", number_day); break;
		case 4: printf(" - The day corresponding to %d is Thursday\n\n", number_day); break;
		case 5: printf(" - The day corresponding to %d is Friday\n\n", number_day); break;
		case 6: printf(" - The day corresponding to %d is Saturday\n\n", number_day); break;
		case 7: printf(" - The day corresponding to %d is Sunday\n\n", number_day); break;

		default: 
			printf("Wrong day number (you need to enter a number between 1 and 7)"); break;
	}
	return 0;
}