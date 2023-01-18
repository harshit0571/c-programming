#include <stdio.h>
int main()
{
    int i, j;
    int n;
    scanf("%d", &n);
    for (i = n; i > 0; i--)
    {
        for (j = n; j >= i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    for (i = 1; i < n; i++)
    {
        for (j = n; j >= i + 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
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