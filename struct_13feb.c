#include <stdio.h>
#include <string.h>
struct Employe
{
    int a;
    int b;
};

int main()
{
    struct Employe one;
    scanf("%d", &one.a);
    printf("%d", one.a);
}