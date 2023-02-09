#include <stdio.h>
int main()
{
    // pointer is a referencre type variable which would store address of another variable
    // int * ptr;
    // using astrix symbol
    int a = 10;
    int *ptr = &a;
    printf("address of a is %p\n", &a);
    printf("address of a is %d\n", *ptr);

    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        int *ptr = &arr[i];
        printf("address of %d is %p\n", i, ptr);
    }
}