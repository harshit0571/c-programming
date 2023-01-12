#include <stdio.h>

int main()
{
    int i;
    int j;
    int c = 65;
    for (i = 0; i < 5; i++)
    {
        c = 65;
        for (j = 0; j < 5; j++)
        {
            printf("%c ", c + j);
            printf(" ");
        }
        printf("\n");
    }
}