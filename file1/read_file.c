#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
int main()
{
	char ch;
	FILE *fptr;
	fptr=fopen("file.txt","r");
	if(fptr==NULL)
	{
		printf("file not created");
	}
	while(1)
	{
		ch=fgetc(fptr);
		if(ch==EOF)
		{
			break;
		}
		printf("%c",ch);
	}
	fclose(fptr);
}

