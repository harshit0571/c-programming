#include <stdio.h>
int main()
{
    int t;
    char ch;
    do
    {
        scanf("%d", &t);
        int f = 1;
        for (int i = 2; i < t / 2; i++)
        {
            int x = t % i;
            if (x == 0)
            {
                f = 0;
            }
        }
        if (f)
        {
            printf("it is a prime no.\n");
        }
        else
        {
            printf("not prime\n");
        }
        printf("do you want to continue?");
        scanf(" %c", &ch);

    } while (ch == 'Y');
}