#include <stdio.h>
#include <math.h>
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
    // finding highest value in array using pointer;
    // merge two array
    // linear search pointer
    int n;
    scanf("%d", &n);
    int arr[n];
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max_ = arr[0];
    for (i = 0; i < n; i++)
    {
        int *ptr = &arr[i];
        max_ = max(*ptr, max_);
    }
    printf("%d is max element", max_);

    //
}