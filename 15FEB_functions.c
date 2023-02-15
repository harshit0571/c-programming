#include <stdio.h>
int func(int a, int b)
{
    return a + b;
}
int main()
{
    int a = func(10, 62);
    printf("%d", a);
}