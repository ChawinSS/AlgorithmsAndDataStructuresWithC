//create file and use function fprintf to display text in side text file

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

	FILE *fp;

	fp=fopen("filename.txt","w"); //create file
	//processing of the file
	
	fprintf(fp,"%s", "helloworld");
	
	//processing of the file
	fclose(fp);
	return 0;
}