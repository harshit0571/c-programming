#include <stdio.h>
int main()
{
    int i;
    int j;

    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5
    // for (i = 1; i <= 5; i++)
    // {
    //     for (j = 1; j <= i; j++)
    //     {
    //         printf("%d", j);
    //         printf(" ");
    //     }
    //     prin0tf("\n");
    // }
    int n;
    scanf("%d", &n);
    for (i = 2 * n; i > 0; i -= 2)
    {
        for (j = i - 1; j > 0; j -= 2)
        {
            printf("%d", j);
            printf(" ");
        }
        printf("\n");
    }
}