//read file and display file on program

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

	FILE *fileName; //pointer varaible 1 step
	char ch[100];
	fileName=fopen("filename.txt","r"); //create file
	//processing of the file
	printf("%s",fgets(ch,50,fileName));
	
	//processing of the file
	fclose(fileName);
	return 0;
}

//getc: read charctor from file
//getw: readinteger from file
//fgets: raed string of chratcer from file

//putc: write charter to file
//putw: write integer to file

//fprintf: writing
//fputs:writing sting of chrater