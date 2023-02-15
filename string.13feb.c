#include <stdio.h>
#include <string.h>
int main()
{
    char str[30];
    gets(str);
    int x = strlen(str);
    for (int i = 0; i < x / 2; i++)
    {
        char y;
        y = str[i];
        str[i] = str[x - i - 1];
        str[x - i - 1] = y;
    }
    printf("%s", str);
}

// a structure is a user defined data type struct;
