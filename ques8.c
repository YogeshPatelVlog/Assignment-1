#include <stdio.h>
int main()
{
    // 8. [write a program in c that takes minutes as inputs and display the total number of hours and minutes in (HH:MM) format 546 = 09:06 ]
    int h, rT, m;

    rT = 546;
    h = 546 / 60;
    m = 546 % 60;
    printf("0%d", h);
    printf(" 0%d", m);

    return 0;
}