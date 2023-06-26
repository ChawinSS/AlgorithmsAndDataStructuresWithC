#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 20

void menu();
void add();
void view();
void searchFirstname();
void searchLastname();
void searchAge();
void searchGender();
void searchStName();
void searchStNo();
void searchCity();
void searchCountry();
void searchZip();
void deleterec();

struct address
{
	char streetName[SIZE];
	int  streetNumber;
	char city[SIZE];
	char country[SIZE];
	int  zipCode;
};

struct student
{
	char fname[SIZE];
	char lname[SIZE];
	unsigned int age;
	char gender[7];
    struct address x;
};

int main(){
    printf("\n<--:Record Management System:-->");
    printf("\nPress any key to continue.");
    getchar();
    menu();
    return 0;
}

void menu(){
    int choice;
    printf("\n\n<--:MENU:-->");
    printf("\nEnter appropriate number to perform following task.");
    printf("\n1 : Add Record");
    printf("\n2 : View Record");
    printf("\n3 : Search By Firstname");
    printf("\n4 : Search By Lastname");
    printf("\n5 : Search By Age");
    printf("\n6 : Search By Gender");
    printf("\n7 : Search By Street name");
    printf("\n8 : Search By Street number");
    printf("\n9 : Search By City");
    printf("\n10 : Search By Country");
    printf("\n11 : Search By Zipcode");
    printf("\n12 : Delete record");
    printf("\n13 : Exit.");

    printf("\n\nEnter your choice: ");
    scanf("%d",&choice);

    printf("\nPress any key to continue.");
    getchar();

    switch(choice){
    case 1:add();break;
    case 2:view();break;
    case 3:searchFirstname();break;
    case 4:searchLastname();break;
    case 5:searchAge();break;
    case 6:searchGender();break;
    case 7:searchStName();break;
    case 8:searchStNo();break;
    case 9:searchCity();break;
    case 10:searchCountry();break;
    case 11:searchZip();break;
    case 12:deleterec();break;
    case 13:exit(1);break;

    default:printf("Invalid Choice.");
    }
}

void add(){
    FILE *fp;
    struct student srh;
    char another ='y';
    fp = fopen("record.txt","ab+");
    if(fp == NULL){
        printf("Error opening file");
        exit(1);
    }
    fflush(stdin);
    while(another == 'y')
    {
        printf("\n<--:ADD RECORD:-->");
		printf("\nfirst name/ last name/ Age/ Gender/ Street name /Street number /City / Country/ Postcode: \n");
		scanf("%s %s %d %s %s %d %s %s %d",srh.fname,srh.lname,&srh.age,srh.gender,srh.x.streetName,&srh.x.streetNumber,srh.x.city,srh.x.country,&srh.x.zipCode);
		fflush(stdin);	

        fwrite(&srh,sizeof(srh),1,fp);
		printf("\nsuccess");

        printf("\npress 'y' to add more student");
        printf("\npress 'n' to  menu");
        printf("\n: ");
		fflush(stdin);	
        another = getchar();
        fflush(stdin);

    }
    fclose(fp);
    printf("\nPress any key to continue.");
    getchar();
    menu();
}

void view(){
    FILE *fp;
    int i=1,j;
    struct student srh;
    printf("\n\n<--:VIEW RECORD:-->");
    printf("\nname\tLastname\tAge\tGender\tSt.name\t\tSt.No.\tCity\tCountry\t\tPostcode: ");

    fp = fopen("record.txt","rb+");
    if(fp == NULL){
        printf("\nError opening file.");
        exit(1);
    }
    j=8;
    while(fread(&srh,sizeof(srh),1,fp) == 1){
        printf("\n%s\t%s\t%d\t%s\t%s\t%d\t%s\t%s\t\t%d",srh.fname,srh.lname,srh.age,srh.gender,srh.x.streetName,srh.x.streetNumber,srh.x.city,srh.x.country,srh.x.zipCode);
        i++;
        j++;
    }
    fclose(fp);
    printf("\n\nPress any key to continue.");
    getchar();
    menu();
}

void searchFirstname(){
    FILE *fp;
    struct student srh;
    char stname[20];
    int count=0;

    printf("\n\n<--:SEARCH RECORD BY FIRST NAME:-->");
    printf("\nEnter first name : ");
    fflush(stdin);
    scanf("%s",stname);

    printf("\nPress any key to continue.");
    getchar();

    fp = fopen("record.txt","rb+");
    if(fp == NULL){
        printf("\nError opening file");
        exit(1);
    }
    else{
    
        while(fread(&srh,sizeof(srh),1,fp ) == 1){
            if(strcmp(stname,srh.fname) == 0){

                printf("\n---------------------------------------------------------------------------------------------------");

                printf("\nname\tLastname\tAge\tGender\tSt.name\t\tSt.No.\tCity\tCountry\t\tPostcode: ");
                printf("\n%s\t",srh.fname); 
	            printf("%s\t",srh.lname); 
	            printf("%d\t",srh.age); 
	            printf("%s\t",srh.gender); 

                printf("%s\t",srh.x.streetName); 
	            printf("%d\t",srh.x.streetNumber); 
	            printf("%s\t",srh.x.city); 
	            printf("%s\t\t",srh.x.country); 
                printf("%d\n",srh.x.zipCode); 
                count=1;
            }
        }
    	
            if(count==0){
                printf("\n\nPerosn is not found!");

                printf("\nPress any key...");
                fflush(stdin);
                getchar();
            }
    }
    fclose(fp);

    printf("\nPress any key to continue.");
    getchar();
    menu();
}

void searchLastname(){
    FILE *fp;
    struct student srh;
    char stname[20];
    int count=0;//////////////////////////////////////////////////////////

    printf("\n\n<--:SEARCH RECORD BY LASTNAME:-->");////////////////////////
    printf("\nEnter last name : ");
    fflush(stdin);
    scanf("%s",stname);

    printf("\nPress any key to continue.");/////////////////////////////////
    getchar();

    fp = fopen("record.txt","rb+");
    if(fp == NULL){
        printf("\nError opening file");
        exit(1);
    }
    else{

    while(fread(&srh,sizeof(srh),1,fp ) == 1){
        if(strcmp(stname,srh.lname) == 0){

                printf("\n---------------------------------------------------------------------------------------------------");

                printf("\nname\tLastname\tAge\tGender\tSt.name\t\tSt.No.\tCity\tCountry\t\tPostcode: ");
                printf("\n%s\t",srh.fname); 
	            printf("%s\t",srh.lname); 
	            printf("%d\t",srh.age); 
	            printf("%s\t",srh.gender); 

                printf("%s\t",srh.x.streetName); 
	            printf("%d\t",srh.x.streetNumber); 
	            printf("%s\t",srh.x.city); 
	            printf("%s\t\t",srh.x.country); 
                printf("%d\n",srh.x.zipCode); 
        count=1;                                    /////////////////////////
        }
    }
                if(count==0){                           ///////////////
                printf("\n\nPerosn is not found!");

                printf("\nPress any key...");           
                fflush(stdin);
                getchar();
            }                                                   ///////////
    }
    fclose(fp);

    printf("\nPress any key to continue.");
    getchar();
    menu();
}

void searchAge(){
    FILE *fp;
    struct student srh;
    int ageinput;
    int count=0;                                                    /////
    printf("\n<--:SEARCH RECORD BY AGE:-->");
    printf("\nEnter age group: ");
    fflush(stdin);
    scanf("%d",&ageinput);                                      ////

    printf("\nPress any key to continue.\n");/////////////////////////////////
    getchar();

    fp = fopen("record.txt","rb+");
    if(fp == NULL){
        printf("\nError opening file");
        exit(1);
    }
    else{
    while(fread(&srh,sizeof(srh),1,fp ) == 1){                      /////////
        if(ageinput==srh.age){

        printf("\n---------------------------------------------------------------------------------------------------");

                printf("\nname\tLastname\tAge\tGender\tSt.name\t\tSt.No.\tCity\tCountry\t\tPostcode: ");
                printf("\n%s\t",srh.fname); 
	            printf("%s\t",srh.lname); 
	            printf("%d\t",srh.age); 
	            printf("%s\t",srh.gender); 

                printf("%s\t",srh.x.streetName); 
	            printf("%d\t",srh.x.streetNumber); 
	            printf("%s\t",srh.x.city); 
	            printf("%s\t\t",srh.x.country); 
                printf("%d\n",srh.x.zipCode); 
        count=1; 
        }
    }
                    if(count==0){                           ///////////////
                printf("\n\nPerosn is not found!");

                printf("\nPress any key...");           
                fflush(stdin);
                getchar();
            }    
    }
    fclose(fp);
    printf("\n\nPress any key to continue.");
    getchar();
    menu();
}

void searchGender(){
    FILE *fp;
    struct student srh;
    char stname[20];
    int count=0;
    printf("\n<--:SEARCH RECORD BY GENDER:-->");
    printf("\nEnter gender : ");
    fflush(stdin);
    scanf("%s",stname);

    printf("\nPress any key to continue.\n");/////////////////////////////////
    getchar();

    fp = fopen("record.txt","rb+");
    if(fp == NULL){
        printf("\nError opening file");
        exit(1);
    }
    else{
    while(fread(&srh,sizeof(srh),1,fp ) == 1){
        if(strcmp(stname,srh.gender) == 0){

                printf("\n---------------------------------------------------------------------------------------------------");

                printf("\nname\tLastname\tAge\tGender\tSt.name\t\tSt.No.\tCity\tCountry\t\tPostcode: ");
                printf("\n%s\t",srh.fname); 
	            printf("%s\t",srh.lname); 
	            printf("%d\t",srh.age); 
	            printf("%s\t",srh.gender); 

                printf("%s\t",srh.x.streetName); 
	            printf("%d\t",srh.x.streetNumber); 
	            printf("%s\t",srh.x.city); 
	            printf("%s\t\t",srh.x.country); 
                printf("%d\n",srh.x.zipCode); 
        count =1;
        }
    }
                        if(count==0){                           ///////////////
                printf("\n\nPerosn is not found!");

                printf("\nPress any key...");           
                fflush(stdin);
                getchar();
            }   
    }
    fclose(fp);
    printf("\nPress any key to continue.");
    getchar();
    menu();
}

void searchStName(){
    FILE *fp;
    struct student srh;
    char stname[20];
    int count=0;//////////////////////////////////////////////////////////

    printf("\n\n<--:SEARCH RECORD BY LASTNAME:-->");////////////////////////
    printf("\nEnter streetname : ");
    fflush(stdin);
    scanf("%s",stname);

    printf("\nPress any key to continue.");/////////////////////////////////
    getchar();

    fp = fopen("record.txt","rb+");
    if(fp == NULL){
        printf("\nError opening file");
        exit(1);
    }
    else{

    while(fread(&srh,sizeof(srh),1,fp ) == 1){
        if(strcmp(stname,srh.x.streetName) == 0){
                printf("\n---------------------------------------------------------------------------------------------------");

                printf("\nname\tLastname\tAge\tGender\tSt.name\t\tSt.No.\tCity\tCountry\t\tPostcode: ");
                printf("\n%s\t",srh.fname); 
	            printf("%s\t",srh.lname); 
	            printf("%d\t",srh.age); 
	            printf("%s\t",srh.gender); 

                printf("%s\t",srh.x.streetName); 
	            printf("%d\t",srh.x.streetNumber); 
	            printf("%s\t",srh.x.city); 
	            printf("%s\t\t",srh.x.country); 
                printf("%d\n",srh.x.zipCode); 
        count=1;                                    /////////////////////////
        }
    }
                if(count==0){                           ///////////////
                printf("\n\nPerosn is not found!");

                printf("\nPress any key...");           
                fflush(stdin);
                getchar();
            }                                                   ///////////
    }
    fclose(fp);

    printf("\nPress any key to continue.");
    getchar();
    menu();
}

void searchStNo(){
    FILE *fp;
    struct student srh;
    int ageinput;
    int count=0;                                                    /////
    printf("\n<--:SEARCH RECORD BY AGE:-->");
    printf("\nEnter street number: ");
    fflush(stdin);
    scanf("%d",&ageinput);                                      ////

    printf("\nPress any key to continue.\n");/////////////////////////////////
    getchar();

    fp = fopen("record.txt","rb+");
    if(fp == NULL){
        printf("\nError opening file");
        exit(1);
    }
    else{
    while(fread(&srh,sizeof(srh),1,fp ) == 1){                      /////////
        if(ageinput==srh.x.streetNumber){/////////////////////////////print only one user
                printf("\n---------------------------------------------------------------------------------------------------");

                printf("\nname\tLastname\tAge\tGender\tSt.name\t\tSt.No.\tCity\tCountry\t\tPostcode: ");
                printf("\n%s\t",srh.fname); 
	            printf("%s\t",srh.lname); 
	            printf("%d\t",srh.age); 
	            printf("%s\t",srh.gender); 

                printf("%s\t",srh.x.streetName); 
	            printf("%d\t",srh.x.streetNumber); 
	            printf("%s\t",srh.x.city); 
	            printf("%s\t\t",srh.x.country); 
                printf("%d\n",srh.x.zipCode); 
        count=1; 
        }
    }
                    if(count==0){                           ///////////////
                printf("\n\nPerosn is not found!");

                printf("\nPress any key...");           
                fflush(stdin);
                getchar();
            }    
    }
    fclose(fp);
    printf("\n\nPress any key to continue.");
    getchar();
    menu();
}

void searchCity(){
    FILE *fp;
    struct student srh;
    char stname[20];
    int count=0;//////////////////////////////////////////////////////////

    printf("\n\n<--:SEARCH RECORD BY LASTNAME:-->");////////////////////////
    printf("\nEnter city : ");
    fflush(stdin);
    scanf("%s",stname);

    printf("\nPress any key to continue.");/////////////////////////////////
    getchar();

    fp = fopen("record.txt","rb+");
    if(fp == NULL){
        printf("\nError opening file");
        exit(1);
    }
    else{

    while(fread(&srh,sizeof(srh),1,fp ) == 1){
        if(strcmp(stname,srh.x.city) == 0){
                printf("\n---------------------------------------------------------------------------------------------------");

                printf("\nname\tLastname\tAge\tGender\tSt.name\t\tSt.No.\tCity\tCountry\t\tPostcode: ");
                printf("\n%s\t",srh.fname); 
	            printf("%s\t",srh.lname); 
	            printf("%d\t",srh.age); 
	            printf("%s\t",srh.gender); 

                printf("%s\t",srh.x.streetName); 
	            printf("%d\t",srh.x.streetNumber); 
	            printf("%s\t",srh.x.city); 
	            printf("%s\t\t",srh.x.country); 
                printf("%d\n",srh.x.zipCode); 
        count=1;                                    /////////////////////////
        }
    }
                if(count==0){                           ///////////////
                printf("\n\nPerosn is not found!");

                printf("\nPress any key...");           
                fflush(stdin);
                getchar();
            }                                                   ///////////
    }
    fclose(fp);

    printf("\nPress any key to continue.");
    getchar();
    menu();
}

void searchCountry(){
    FILE *fp;
    struct student srh;
    char stname[20];
    int count=0;//////////////////////////////////////////////////////////

    printf("\n\n<--:SEARCH RECORD BY LASTNAME:-->");////////////////////////
    printf("\nEnter country : ");
    fflush(stdin);
    scanf("%s",stname);

    printf("\nPress any key to continue.");/////////////////////////////////
    getchar();

    fp = fopen("record.txt","rb+");
    if(fp == NULL){
        printf("\nError opening file");
        exit(1);
    }
    else{

    while(fread(&srh,sizeof(srh),1,fp ) == 1){
        if(strcmp(stname,srh.x.country) == 0){
                printf("\n---------------------------------------------------------------------------------------------------");

                printf("\nname\tLastname\tAge\tGender\tSt.name\t\tSt.No.\tCity\tCountry\t\tPostcode: ");
                printf("\n%s\t",srh.fname); 
	            printf("%s\t",srh.lname); 
	            printf("%d\t",srh.age); 
	            printf("%s\t",srh.gender); 

                printf("%s\t",srh.x.streetName); 
	            printf("%d\t",srh.x.streetNumber); 
	            printf("%s\t",srh.x.city); 
	            printf("%s\t\t",srh.x.country); 
                printf("%d\n",srh.x.zipCode); 
        count=1;                                    /////////////////////////
        }
    }
                if(count==0){                           ///////////////
                printf("\n\nPerosn is not found!");

                printf("\nPress any key...");           
                fflush(stdin);
                getchar();
            }                                                   ///////////
    }
    fclose(fp);

    printf("\nPress any key to continue.");
    getchar();
    menu();
}

void searchZip(){
    FILE *fp;
    struct student srh;
    int ageinput;
    int count=0;                                                    /////
    printf("\n<--:SEARCH RECORD BY AGE:-->");
    printf("\nEnter postcode: ");
    fflush(stdin);
    scanf("%d",&ageinput);                                      ////

    printf("\nPress any key to continue.\n");/////////////////////////////////
    getchar();

    fp = fopen("record.txt","rb+");
    if(fp == NULL){
        printf("\nError opening file");
        exit(1);
    }
    else{
    while(fread(&srh,sizeof(srh),1,fp ) == 1){                      /////////
        if(ageinput==srh.x.zipCode){/////////////////////////////print only one user
                printf("\n---------------------------------------------------------------------------------------------------");

                printf("\nname\tLastname\tAge\tGender\tSt.name\t\tSt.No.\tCity\tCountry\t\tPostcode: ");
                printf("\n%s\t",srh.fname); 
	            printf("%s\t",srh.lname); 
	            printf("%d\t",srh.age); 
	            printf("%s\t",srh.gender); 

                printf("%s\t",srh.x.streetName); 
	            printf("%d\t",srh.x.streetNumber); 
	            printf("%s\t",srh.x.city); 
	            printf("%s\t\t",srh.x.country); 
                printf("%d\n",srh.x.zipCode); 
        count=1; 
        }
    }
                    if(count==0){                           ///////////////
                printf("\n\nPerosn is not found!");

                printf("\nPress any key...");           
                fflush(stdin);
                getchar();
            }    
    }
    fclose(fp);
    printf("\n\nPress any key to continue.");
    getchar();
    menu();
}

void deleterec(){
    char stname[20];
    FILE *fp,*ft;
    struct student srh;
    printf("\n\n<--:DELETE RECORD:-->");
    printf("\nEnter firstname : ");
    fflush(stdin);
    scanf("%s",stname);
    fp = fopen("record.txt","rb+");
    if(fp == NULL){
        printf("\nError opening file");
        exit(1);
    }
    ft = fopen("temp.txt","wb+");
    if(ft == NULL){
        printf("\nError opening file");
        exit(1);
    }
    while(fread(&srh,sizeof(srh),1,fp) == 1){
        if(strcmp(stname,srh.fname)!=0)
            fwrite(&srh,sizeof(srh),1,ft);
    }
    fclose(fp);
    fclose(ft);
    remove("record.txt");
    rename("temp.txt","record.txt");
    printf("\nDelete Successful");
    printf("\nPress any key to continue.");
    getchar();
    menu();
}