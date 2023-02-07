#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int x;
    scanf("%d", &x);
    int ar[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &ar[i]);
    }

    int t;
    scanf("%d", &t);
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    for (int i = 0; i < x; i++)
    {
        sum += ar[i];
    }
    printf("%d", sum);
}