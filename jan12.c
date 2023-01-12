#include <stdio.h>

int main()
{
    int i;
    // for (i = 1; i <= 10; i++)
    // {
    //     printf("%d \n", i);
    //     i++;
    // }
    // int sum = 0;
    // for (i = 1; i <= 5; i++)
    // {
    //     sum = sum + i;
    // }
    // printf("%d", sum);
    // int count = 0;
    // for (i = 1; i <= 1000; i + 7)
    // {
    //     count++;
    // }
    // printf("%d", count);
    int sum = 0;
    int odd = 0;
    for (i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
        else
        {
            odd = odd + i;
        }
    }
    printf("even sum = %d \n", sum);
    printf("odd sum = %d", odd);
}