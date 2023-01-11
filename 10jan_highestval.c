#include <stdio.h>
#include <string.h>

int main()
{
    int a, b, c;
    scanf("%d", a);
    scanf("%d", b);
    scanf("%d", c);

    if (a > b)
    {
        if (a > c)
        {
            printf("a is greater");
        }
        if (a == c)
        {
            printf("a b equal and greater");
        }
        else
        {
            printf("c is greater");
        }
    }
    if (b > a)
    {
        if (b > c)
        {
            printf("%d", b);
        }
        if (b == c)
        {
            printf("c b equal and greater");
        }
        else
        {
            printf("c is greater");
        }
    }
    if (c > a)
    {
        if (c > b)
        {
            printf("c is greater");
        }
        if (a == c)
        {
            printf("c b equal and greater");
        }
        else
        {
            printf("c is greater");
        }
    }
}