#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 20

void menu();
void add();
void view();
void searchf();
void searchl();
void searcha(); //problem
void searchg();
void viewsp();
void deleterec();

struct student
{
	char fname[SIZE];
	char lname[SIZE];
	unsigned int age;
	char gender[7];
};

int main()
{
    printf("\n<--:Student Record Management System:-->");
    printf("\nPress any key to continue.");
    getchar();
    menu();
    return 0;
}

void menu()
{
    int choice;
    printf("\n\n<--:MENU:-->");
    printf("\nEnter appropriate number to perform following task.");
    printf("\n1 : Add Record");
    printf("\n2 : View Record");
    printf("\n3 : Search By firstname");
    printf("\n4 : Search By lastname");
    printf("\n5 : Search By age");
    printf("\n6 : Search By Gender");
    printf("\n7 : List womens older than 25");
    printf("\n8 : Delete record");
    printf("\n9 : Exit.");

    printf("\n\nEnter your choice: ");
    scanf("%d",&choice);

    printf("\nPress any key to continue.");
    getchar();

    switch(choice){
    case 1:add();break;
    case 2:view();break;
    case 3:searchf();break;
    case 4:searchl();break;
    case 5:searcha();break;
    case 6:searchg();break;
    case 7:viewsp();break; 
    case 8:deleterec();break;

    case 9:exit(1);break;

    default:printf("Invalid Choice.");
    }
}

void add()
{
    FILE *fp;
    struct student srh;
    char another ='y';
    fp = fopen("recordstudent.txt","ab+");
    if(fp == NULL){
        printf("Error opening file");
        exit(1);
    }
    fflush(stdin);
    while(another == 'y')
    {
        printf("\n<--:ADD RECORD:-->");
		printf("\nfirstname\tlast\tname\tAge\tGender: \n");
		scanf("%s %s %d %s",srh.fname,srh.lname,&srh.age,srh.gender);
        fwrite(&srh,sizeof(srh),1,fp);

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

void view()
{
    FILE *fp;
    int i=1,j;
    struct student srh;
    printf("\n\n<--:VIEW RECORD:-->");
    printf("\nName\tlastname\tAge\tGender");
    printf("\n--------------------------------------------------");
    fp = fopen("recordstudent.txt","rb+");
    if(fp == NULL){
        printf("\nError opening file.");
        exit(1);
    }
    j=8;
    while(fread(&srh,sizeof(srh),1,fp) == 1){
        printf("\n%s\t%s\t%d\t%s",srh.fname,srh.lname,srh.age,srh.gender);
        i++;
        j++;
    }
    fclose(fp);
    printf("\n\nPress any key to continue.");
    getchar();
    menu();
}

void searchf(){
    FILE *fp;
    struct student srh;
    char stname[20];
    int count=0;

    printf("\n\n<--:SEARCH RECORD BY FIRST NAME:-->");
    printf("\nEnter firstname of student : ");
    fflush(stdin);
    scanf("%s",stname);

    printf("\nPress any key to continue.");
    getchar();

    fp = fopen("recordstudent.txt","rb+");
    if(fp == NULL){
        printf("\nError opening file");
        exit(1);
    }
    else{
    
        while(fread(&srh,sizeof(srh),1,fp ) == 1){
            if(strcmp(stname,srh.fname) == 0){

                printf("\n------------------------------------------");

                printf("\nFirstname\tLastname\tAge\tGender"); 

                printf("\n%s\t\t",srh.fname); 
	            printf("%s\t",srh.lname); 
	            printf("%d\t",srh.age); 
	            printf("%s\t\n",srh.gender); 
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

void searchl(){
    FILE *fp;
    struct student srh;
    char stname[20];
    int count=0;//////////////////////////////////////////////////////////

    printf("\n\n<--:SEARCH RECORD BY LASTNAME:-->");////////////////////////
    printf("\nEnter lastname of student : ");
    fflush(stdin);
    scanf("%s",stname);

    printf("\nPress any key to continue.");/////////////////////////////////
    getchar();

    fp = fopen("recordstudent.txt","rb+");
    if(fp == NULL){
        printf("\nError opening file");
        exit(1);
    }
    else{

    while(fread(&srh,sizeof(srh),1,fp ) == 1){
        if(strcmp(stname,srh.lname) == 0){
                printf("\n------------------------------------------");

                printf("\nFirstname\tLastname\tAge\tGender"); 

                printf("\n%s\t\t",srh.fname); 
	            printf("%s\t",srh.lname); 
	            printf("%d\t",srh.age); 
	            printf("%s\t\n",srh.gender); 
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

void searcha(){
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

    fp = fopen("recordstudent.txt","rb+");
    if(fp == NULL){
        printf("\nError opening file");
        exit(1);
    }
    else{
    while(fread(&srh,sizeof(srh),1,fp ) == 1){                      /////////
        if(ageinput==srh.age){/////////////////////////////print only one user
                printf("\n------------------------------------------");

                printf("\nFirstname\tLastname\tAge\tGender"); 

                printf("\n%s\t\t",srh.fname); 
	            printf("%s\t",srh.lname); 
	            printf("%d\t",srh.age); 
	            printf("%s\t\n",srh.gender); 
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

void searchg(){
    FILE *fp;
    struct student srh;
    char stname[20];
    int count=0;
    printf("\n<--:SEARCH RECORD BY GENDER:-->");
    printf("\nEnter gender ( m:male / f:female ) : ");
    fflush(stdin);
    scanf("%s",stname);

    printf("\nPress any key to continue.\n");/////////////////////////////////
    getchar();

    fp = fopen("recordstudent.txt","rb+");
    if(fp == NULL){
        printf("\nError opening file");
        exit(1);
    }
    else{
    while(fread(&srh,sizeof(srh),1,fp ) == 1){
        if(strcmp(stname,srh.gender) == 0){

                printf("\n------------------------------------------");

                printf("\nFirstname\tLastname\tAge\tGender (m/f)"); 

                printf("\n%s\t\t",srh.fname); 
	            printf("%s\t",srh.lname); 
	            printf("%d\t",srh.age); 
	            printf("%s\t\n",srh.gender);  
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

void deleterec()
{
    char stname[20];
    FILE *fp,*ft;
    struct student srh;
    printf("\n\n<--:DELETE RECORD:-->");
    printf("\nEnter name of student to delete record : ");
    fflush(stdin);
    scanf("%s",stname);
    fp = fopen("recordstudent.txt","rb+");
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
    remove("recordstudent.txt");
    rename("temp.txt","recordstudent.txt");
    printf("\nDelete Successful");
    printf("\nPress any key to continue.");
    getchar();
    menu();
}

void viewsp()
{
    FILE *fp;
    int i=1,j;
    char stname[20] = "f"; //female
    struct student srh;
    printf("\n\n<--:VIEW RECORD FEMALE OVER 25:-->");
    printf("\nName\tlastname\tAge\tGender");
    printf("\n--------------------------------------------------");
    fp = fopen("recordstudent.txt","rb+");
    if(fp == NULL){
        printf("\nError opening file.");
        exit(1);
    }
    j=8;
    while(fread(&srh,sizeof(srh),1,fp) == 1){
        if(srh.age>25 && strcmp(stname,srh.gender) == 0){ ///older than 25 and female
        printf("\n%s\t%s\t%d\t%s",srh.fname,srh.lname,srh.age,srh.gender);
        i++;
        j++;
        }
    }
    fclose(fp);
    printf("\n\nPress any key to continue.");
    getchar();
    menu();
}