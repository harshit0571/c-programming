#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    int even = 0;
    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        count = 0;
        while (arr[i] > 0)
        {
            count++;
            int r = arr[i] % 10;
            sum = sum * 10 + r;
            arr[i] = arr[i] / 10;
        }
        arr[i] = sum;
        printf("%d %d \n", arr[i], count);
        if (count % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     printf(" %d \n", arr[i]);
    // }
    printf("odd %d even %d", odd, even);
}