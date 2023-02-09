#include <stdio.h>
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int n;
    printf("enter first array0");
    scanf("%d", &n);
    int i;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max_ = arr[0];
    for (i = 0; i < n; i++)
    {
        max_ = max(max_, arr[i]);
    }
    int ans = -9999999;
    for (i = 0; i < n; i++)
    {
        if (arr[i] != max_)
        {
            ans = max(ans, arr[i]);
        }
    }
    printf("second largest is %d", ans);
}