#include <stdio.h>
void swap(int *a, int *b)
{
    int d;
    d = *a;
    *a = *b;
    *b = d;
}
int main()
{
    int n;
    printf("enter array");
    scanf("%d", &n);
    int i;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n / 2; i++)
    {
        int *ptr = &arr[i];
        int *ptr2 = &arr[n - i - 1];
        swap(ptr, ptr2);
    }
    printf("reverse\n");
    for (i = 0; i < n; i++)
    {
        printf("%d \n", arr[i]);
    }
}
