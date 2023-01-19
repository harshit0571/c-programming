  for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf("_");
        }
        for (j = i; j > 0; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }