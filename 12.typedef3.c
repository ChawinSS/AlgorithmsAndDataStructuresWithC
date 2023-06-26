#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct address{
	char streetName[50];
	char city[20];
	char country[20];
	int  zipCode;
	int  streetNumber;
} ADDRESS;

typedef struct student_data{
	char name[50];
	char lastname[50];
	unsigned int age;
	char gender;
	ADDRESS s_address;
} SD;

int main()
{
	SD students[100];
	char line[100];
	char *token;
	FILE *fptr;

	if((fptr=fopen("Students_Data.txt","r"))!=NULL){
		while(!feof(fptr)){ //feof return zero if fp is on EOF otherwise zero
			fgets(line,100,fptr);
			token = strtok(line,";");
			while( token != NULL ) {
      			printf( " Name : %s\n", token);token = strtok(NULL, " ");
      			printf( " Last Name : %s\n", token);token = strtok(NULL, " ");
      			printf( " Age : %s\n", token);token = strtok(NULL, " ");
      			printf( " Gender : %s\n", token);token = strtok(NULL, " ");
      			printf( " Address : %s\n", token);token = strtok(NULL, " ");
          	}
          	printf("\n\n\n");
        }
	}else{
		printf("Sorry could not opened\n");
		exit(-1);
	}

	return 0;
}

