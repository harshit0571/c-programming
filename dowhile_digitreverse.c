#include <stdio.h>
int main()
{
    int a, m, s = 0;
    char ch;
    do
    {
        scanf("%d", &a);
        s = 0;
        while (a > 0)
        {
            m = a % 10;
            s = s * 10 + m;
            a = a / 10;
        }
        printf("reverse of the number is %d \n", s);
        printf("do you want to continue? \n");
        scanf(" %c", &ch);

    } while (ch == 'Y');
}