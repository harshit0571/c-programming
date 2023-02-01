#include <stdio.h>
int main()
{
    switch (1 + 5)
    {
    case 1:
        printf("hello");
        break;
    case 2:
        printf("hello2");
        break;

    default:
        printf("default");
        break;
    }
}