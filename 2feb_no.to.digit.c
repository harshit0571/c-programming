#include <stdio.h>
int main()
{
    int t;
    printf("enter no.");
    scanf("%d", &t);

    int s = 0;
    int extra = 0;
    int count = 0;
    int i;
    while (t > 0)
    {
        i = t % 10;
        s = s * 10 + i;
        count++;
        t = t / 10;
    }
    while (s > 0)
    {
        i = s % 10;
        if (i % 2 == 0)
        {
            extra = extra * 10 + i;
        }
        s = s / 10;
    }
    printf("%d", extra);
}