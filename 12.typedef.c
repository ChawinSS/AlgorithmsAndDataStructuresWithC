//https://www.youtube.com/watch?v=CI9dRTvzgqE
#include <stdio.h>


typedef struct
{
	int age;
	float height;
	char names[50];

} Students;


int main()
{
	Students BCS11[3];  // Students BCS11[3];  // array of three mean the maximum of student is only 3


	for (int i = 0; i<3; i++){
		printf("Please enter the followings:\n");
		printf("Age (int), height(float), name and grade\t\t\t\t");
		// printf("example: 30 168 Chawin\n");
		scanf("%d%f%s",&BCS11[i].age,&BCS11[i].height,BCS11[i].names);
	}

	// Display results
	printf("Age\t Height \t Name\n");
	for (int i = 0; i<3; i++){
		printf("%d\t%f\t%s\n",BCS11[i].age,BCS11[i].height,BCS11[i].names);
	}
	return 0;
}