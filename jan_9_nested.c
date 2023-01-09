#include <stdio.h>

int main()
{
    int var1;
    int var2;
    char ch;
    printf("enter var1: ");
    scanf("%d", &var1);
    printf("enter var2: ");
    scanf("%d", &var2);
    printf("enter choice: ");
    scanf("%c", &ch);
    int res;
    if (ch == '+' || ch == 'a')
    {
        res = var1 + var2;
        printf("%d", res);
    }
    else if (ch == '-' || ch == 's')
    {
        res = var1 - var2;
        printf("%d", res);
    }
    else if (ch == '*' || ch == 'm')
    {
        res = var1 * var2;
        printf("%d", res);
    }
    else if (ch == '/' || ch == 'd')
    {
        res = var1 / var2;
        printf("%d", res);
    }
    else
    {
        printf("wrong choice");
    }
}
