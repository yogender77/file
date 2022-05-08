#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
int main()
{
        char data[SIZE];
        FILE *fptr;
        fptr=fopen("file.txt1","w");
        if(fptr==NULL)
        {
                printf("file is not created");
        }
        printf("enter data to the file");
        fgets(data,SIZE,stdin);
        fputs(data,fptr);
        fclose(fptr);
        printf("file is created ssuccefully");
}

