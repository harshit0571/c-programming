#include <stdio.h>

int main()
{
    enum week
    {
        Mon,
        Tue,
        Wed,
        Thur,
        Fri,
        Sat,
        Sun
    };
    enum week day;
    day = Wed;
    printf("%d", day);
    return 0;
}