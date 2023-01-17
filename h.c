#include <stdio.h>
int main()
{
    printf("Enter A and B \n");
    int a, b, c;
    char op;
    scanf("%d,", &a);
    scanf("%d,", &b);
    // printf("Choose an opertaion \n press A for addition \n B for substraction \n C for multipication \n D for divition\n");
    scanf("%c", &op);
    if (op = 'A')
    {
        c = a + b;
    }
    else if (op = 'B')
    {
        c = a - b;
    }
    else if (op = 'C')
    {
        c = a * b;
    }
    else if (op = 'D')
    {
        c = a / b;
    }

    return 0;
}