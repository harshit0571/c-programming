#include <stdio.h>
#include <math.h>

int fact(int a)
{
    int f = 1;
    for (int i = 1; i <= a; i++)
    {
        f = f * i;
    }
    return f;
}
float comb(int n, int r)
{
    float y = (fact(n - r) * fact(r));
    float x = (fact(n)) / y;
    return x;
}
float perm(int n, int r)
{
    int x = (fact(n)) / (fact(n - r));
    return x;
}
int main()
{
    int n, r;
    scanf("%d %d", &n, &r);
    float a = perm(n, r);
    float b = comb(n, r);
    printf("perm is %f and comb is %f", a, b);
}