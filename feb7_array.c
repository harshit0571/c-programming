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
    int t;
    scanf("%d", &t);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == t)
        {
            count++;
            printf("found at %d", i);
            break;
        }
    }
    if (count == 0)
    {
        printf("not found");
    }
}