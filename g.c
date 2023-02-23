// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int n1, m1;
    scanf("%d", &n1);
    scanf("%d", &m1);
    int arr1[n1][m1];

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    int arr2[n][m1];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            arr2[i][j] = 0;
            for (int k = 0; k < m; k++)
            {
                arr2[i][j] += arr[i][k] * arr1[k][j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            printf(" %d ", arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}