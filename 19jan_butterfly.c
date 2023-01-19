#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int i, j;
    for (i = 1; i <= 2 * n; i++)
    {
        if (i <= n)
        {
            for (j = 1; j <= i; j++)
            {
                printf("*");
            }
            for (j = 0; j <= n - i - 1; j++)
            {
                printf(" ");
            }
            for (j = 0; j <= n - i - 1; j++)
            {
                printf(" ");
            }
            for (j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }

        else
        {
            for (j = 1; j <= (2 * n) - i + 1; j++)
            {
                printf("*");
            }
            for (j = 1; j < i - n; j++)
            {
                printf(" ");
            }
            for (j = 1; j < i - n; j++)
            {
                printf(" ");
            }
            for (j = 1; j <= (2 * n) - i + 1; j++)
            {
                printf("*");
            }

            printf("\n");
        }
        }
}