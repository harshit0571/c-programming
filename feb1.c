#include <stdio.h>
int main()
{
    int pri, rate, tume, interest;
    char ch;
    do
    {
        scanf("%d %d %d", &pri, &rate, &tume);
        interest = (pri * rate * tume) / 100;
        printf("%d", interest);

        printf("do you want to continue? \n");
        scanf(" %c", &ch);
    } while (ch == 'Y');
}