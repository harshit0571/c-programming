#include <stdio.h>
#include <string.h>

int main()
{
    int var1;
    int var2;
    int ch;
    printf("enter var1: ");
    scanf("%d", &var1);
    printf("enter var2: ");
    scanf("%d", &var2);
    printf("enter choice: ");
    scanf("%d", &ch);
    int res;
    if (ch == 1)
    {
        res = var1 + var2;
        printf("%d", res);
    }
    else if (ch == 2)
    {
        res = var1 - var2;
        printf("%d", res);
    }
    else if (ch == 3)
    {
        res = var1 * var2;
        printf("%d", res);
    }
    else if (ch == 4)
    {
        res = var1 / var2;
        printf("%d", res);
    }
    else if (ch > 4 || ch < 1)
    {
        printf("wrong choice");
    }
}