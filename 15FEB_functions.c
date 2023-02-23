#include <stdio.h>
#include <string.h>
void func(int a)
{
}
int main()
{
    char s[1000];
    gets(s);

    int x = strlen(s);
    int a;
    int n;
    int sp;
    for (int i = 0; i < x; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
        {
            a++;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            n++;
        }
        else
        {
            sp++;
        }
    }
    puts(s);
    printf("%d %d %d", a, n, sp);
}