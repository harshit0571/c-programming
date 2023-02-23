#include <stdio.h>
#include <string.h>
void recur(int a)
{
    if (a <= 0)
    {
        return;
    }
    int i = a % 10;
    printf("%d", i);
    recur(a / 10);
}

int prime(int a, int div)
{
    if (div >= a / 2)
    {
        return 1;
    }
    if (a % div == 0)
    {
        return 0;
    }
    else
    {
        prime(a, div + 1);
    }
}
int main()
{
    // recur(-1);
    int x = prime(322, 2);
    printf("%d", x);
}