#include <stdio.h>

struct address
{
	int street_no;
	char stree_names[50];
	int postcode;
	char countryname[50];
};

struct Student
{
	char lname[50];
	char fname[50];
	char phonenumber[15];
	struct address x;
};


int main()
{
	struct Student Germanclass_B2[3];  // Students BCS11[3];  // array of three mean the maximum of student is only 3


	for (int i = 0; i<3; i++){
		printf("Please enter the followings:\n");
		printf("name/ lastname/ phone number /Streetname/Street number /Postcode /Country\t\t\t\t\n");
		// printf("example: 30 168 Chawin\n");
		scanf("%s%s%s%s%d%d%s",Germanclass_B2[i].lname, Germanclass_B2[i].fname, Germanclass_B2[i].phonenumber, Germanclass_B2[i].x.stree_names, &Germanclass_B2[i].x.street_no, &Germanclass_B2[i].x.postcode, Germanclass_B2[i].x.countryname);
	}

	// Display results
		printf("name/ lastname/ phone number /Streetname/Street number /Postcode /Country\t\t\t\t");
	for (int i = 0; i<3; i++){
		printf("\n%s\t%s\t%s\t%s\t%d\t%d\t%s\n",Germanclass_B2[i].lname, Germanclass_B2[i].fname, Germanclass_B2[i].phonenumber, Germanclass_B2[i].x.stree_names, Germanclass_B2[i].x.street_no, Germanclass_B2[i].x.postcode,Germanclass_B2[i].x.countryname);

	}
	return 0;
}