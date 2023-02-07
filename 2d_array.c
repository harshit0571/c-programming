#include <stdio.h>
int main()
{
    int n;
    int x;
    scanf("%d", &n);
    scanf("%d", &x);

    int arr[n][x];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < x; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < x; j++)
        {
            sum += arr[i][j];
        }
        printf(" %d ", sum);
    }
}