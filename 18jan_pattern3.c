#include <stdio.h>
int main()
{
    int i, j;
    int n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 65; j < 65 + i; j++)
        {
            printf("%c", j);
        }
        printf("\n");
    }

    for (i = n - 1; i > 0; i--)
    {
        for (j = 65; j < 65 + i; j++)
        {
            printf("%c", j);
        }
        printf("\n");
    }
}

// A
// AB
// ABC
// ABCD
// ABC
// AB
// A