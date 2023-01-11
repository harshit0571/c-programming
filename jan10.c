#include <stdio.h>
#include <string.h>

int main()
{
    int var1 = 10;
    int var2 = 6;
    char ch;
    scanf("%c", &ch);
    int res;
    switch (ch)
    {
    case '1':
        res = var1 + var2;
        printf("%d", res);
        break;
    case '2':
        res = var1 - var2;
        printf("%d", res);
        break;
    case '3':
        res = var1 * var2;
        printf("%d", res);
        break;
    default:
        printf("fff");
        break;

    case '4':
        res = var1 / var2;
        printf("%d", res);
        break;
    }
}

//