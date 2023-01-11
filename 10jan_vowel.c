#include <stdio.h>
#include <string.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    switch (ch)
    {
    case 'A':
        printf("vowel");
        break;
    case 'E':
        printf("vowel");
        break;
    case 'I':
        printf("vowel");
        break;
    case 'O':
        printf("vowel");
        break;
    case 'U':
        printf("vowel");
        break;

    default:
        printf("consonent");
        break;
    }
}