#include <stdio.h>
int main()
{
    int i, j;
    int n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    for (i = n - 1; i > 0; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
// 1
// 12
// 123
// 1234
// 12345
// 1234
// 123
// 12
// 1