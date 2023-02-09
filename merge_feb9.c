#include <stdio.h>
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

    int m;
    printf("enter second array0");
    scanf("%d", &m);
    int arr2[m];
    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int ans[n + m];
    for (i = 0; i < n; i++)
    {
        ans[i] = arr[i];
    }
    int k = n;
    for (i = 0; i < m; i++)
    {

        ans[k] = arr2[i];
        ++k;
    }

    for (i = 0; i < n + m; i++)
    {
        printf("%d \n", ans[i]);
    }
}