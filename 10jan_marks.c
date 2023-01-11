#include <stdio.h>
#include <string.h>

void Check(int a)
{
    if (a >= 0 && a <= 100)
    {
        if (a >= 45)
        {
            printf("pass \n");
        }
        else
        {
            printf("fail \n");
        }
    }
    else
    {
        printf("invalid marks");
    }
}

void Percent(int a)
{
    int p = (a / 5);
    printf("percent is: %d \n", p);

    if (p >= 91 && p <= 100)
    {
        printf("Grade is O \n");
    }
    else if (p >= 81 && p <= 90)
    {
        printf("Grade is A+ \n");
    }
    else if (p >= 71 && p <= 80)
    {
        printf("Grade is A \n");
    }
    else if (p >= 61 && p <= 70)
    {
        printf("Grade is B \n");
    }
    else if (p >= 51 && p <= 60)
    {
        printf("Grade is C \n");
    }
    else
    {
        printf("Fail");
    }
}

int main()
{
    int m1;
    int m2;
    int m3;
    int m4;
    int m5;
    scanf("%d", &m1);
    scanf("%d", &m2);
    scanf("%d", &m3);
    scanf("%d", &m4);
    scanf("%d", &m5);

    printf("in subject 1: ");
    Check(m1);
    printf("in subject 2: ");
    Check(m2);
    printf("in subject 3: ");
    Check(m3);
    printf("in subject 4: ");
    Check(m4);
    printf("in subject 5: ");
    Check(m5);

    int sum = m1 + m2 + m3 + m4 + m5;
    Percent(sum);
}