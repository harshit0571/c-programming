#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i;
    int j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf("_");
        }

        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        for (j = i - 1; j >= 1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }
}