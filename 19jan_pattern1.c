#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i, j;
    // for (i = 1; i <= n; i++)
    // {
    //     for (j = 1; j <= n - i; j++)
    //     {
    //         printf("_");
    //     }
    //     for (j = i; j > 0; j--)
    //     {
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }

    // for (i = 1; i <= n; i++)
    // {
    //     for (j = 1; j < i; j++)
    //     {
    //         printf("_");
    //     }
    //     for (j = n - i + 1; j > 0; j--)
    //     {
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }

    // for (i = 1; i <= n; i++)
    // {
    //     for (j = 1; j <= n - i; j++)
    //     {
    //         printf("_");
    //     }
    //     for (j = n - i + 1; j <= n; j++)
    //     {
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }
    // for (i = 1; i <= n; i++)
    // {
    //     for (j = 1; j < i; j++)
    //     {
    //         printf("_");
    //     }
    //     int k = 2 * n - 1;
    //     for (j = 1; j <= n - i + 1; j++)
    //     {

    //         printf("%d", k);
    //         k = k - 2;
    //     }
    //     printf("\n");
    // }

    // int k = 2 * n - 1;
    // for (i = 1; i <= n; i++)
    // {
    //     for (j = 1; j <= n - i; j++)
    //     {
    //         printf("_");
    //     }
    //     for (j = n - i + 1; j <= n; j++)
    //     {
    //         printf("%d", k);
    //     }
    //     k = k - 2;
    //     printf("\n");
    // }

    // for (i = 1; i <= n; i++)
    // {
    //     if (i == 1 || i == n)
    //     {
    //         for (j = 65; j < 65 + n; j++)
    //         {
    //             printf("%c", j);
    //         }
    //     }
    //     else
    //     {
    //         printf("%c", 65);
    //         for (j = 1; j < n - 1; j++)
    //         {
    //             printf("_");
    //         }
    //         printf("%c", 65 + n - 1);
    //     }

    //     printf("\n");
    // }

    // for (i = 0; i <= 2 * n - 1; i++)
    // {
    //     if (i <= n)
    //     {
    //         for (j = 1; j <= n - i; j++)
    //         {
    //             printf("_");
    //         }
    //         for (j = 1; j <= i; j++)
    //         {
    //             printf("%d", j);
    //         }
    //         printf("\n");
    //     }
    //     else
    //     {
    //         for (j = 1; j <= i - n; j++)
    //         {
    //             printf("_");
    //         }
    //         for (j = 1; j <= 2 * n - i; j++)
    //         {
    //             printf("%d", j);
    //         }
    //         printf("\n");
    //     }
    // }
}