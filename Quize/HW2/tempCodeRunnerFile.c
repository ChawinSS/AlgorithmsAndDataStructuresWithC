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