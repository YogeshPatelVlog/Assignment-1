#include <stdio.h>
int main()
{
    // [9. write a program to convet specified days into years , weeeks and days //1329 = 3 years 33weeks 3 days]
    int days;
    days = 1329;

    // printf("Enter your days:");
    // scanf("%d",&days);

    int outputYears = days / 365;
    int dontShowYears = days % 365;
    int outputWeeks = dontShowYears / 7;
    int outputDays = dontShowYears % 7;

    printf("%d Years ", outputYears);
    printf("%d weeks ", outputWeeks);
    printf("%d Days", outputDays);
    return 0;
}