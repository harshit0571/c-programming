#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char file[100];
    printf("enter file name \n");
    gets(file);
    printf("enter data \n");
    char data[100];
    gets(data);
    fp = fopen(file, "w");
    fputs(data, fp);


    
}