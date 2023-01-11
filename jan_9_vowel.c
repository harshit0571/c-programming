#include <stdio.h>
#include <string.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("vowel %c", ch);
    }
    else
    {
        printf("consonent %c", ch);
    }
}