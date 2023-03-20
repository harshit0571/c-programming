#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    fp = fopen("names.txt", "w");
    char a[10];
    int ch = 1;
    if (fp == NULL)
    {
        printf("fail to open file for writing");
        exit(1);
    }
    while (ch != 0)
    {
        printf("Enter any name");
        gets(a);
        fputs(a, fp);
        fputs("\n", fp);
        printf("1 for more and 0 for exit");
        scanf("%d", &ch);
    }
    fclose(fp);
    return 1;
}