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
            for (j = 65; j < 65 + i; j++)
            {
                printf("%c", j);
            }
            printf("\n");
        }
        else
        {
            for (j = 65; j < 65 + ((2 * n - 1) - i + 1); j++)
            {
                printf("%c", j);
            }
            printf("\n");
        }
    }
}

// A
// AB
// ABC
// ABCD
// ABC
// AB
// A