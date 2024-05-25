#include <stdio.h>
int main()
{
    // 7.[ Write a program to convert km per hours into miles]
    float km = 15;
    // 1 KM= 0.621371
    float miles = 0.621371;
    printf("Your converted KM perhour Into Miles is :");
    printf("%fMiles per hour", (km * miles));

    return 0;
}