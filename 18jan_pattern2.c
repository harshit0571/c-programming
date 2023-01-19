#include <stdio.h>
int main()
{
    int i, j;
    int n;
    scanf("%d", &n);
    for (i = 1; i <= 2 * n - 1; i++)
    {
        if (i <= n)
        {
            for (j = n; j >= n - i; j--)
            {
                printf("%d", j);
            }
            printf("\n");
        }
        else
        {
            for (j = n; j >= (2 * n - 1) - i; j--)
            {
                printf("%d", j);
            }
            printf("\n");
        }
    }
}
// 5
// 54
// 543
// 5432
// 54321
// 5432
// 543
// 54
// 5