#include <stdio.h>
#include <math.h>

int discriminent(int a, int b, int c)
{
    int d = b * b - 4 * a * c;
    d = sqrt(d);
    return d;
}
void root(int a, int b, int c)
{
    int x = discriminent(a, b, c);
    int y, z;
    if (x > 0)
    {
        y = (-b + x) / (2 * a);
        z = (-b - x) / (2 * a);
        printf("%d %d", y, z);
    }
    else if (x == 0)
    {
        printf(" %d ", x);
        y = (-b + x) / (2 * a);
        printf("%d %d", y, y);
    }
}
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    root(a, b, c);
}
