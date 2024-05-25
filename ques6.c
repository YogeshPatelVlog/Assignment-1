#include <stdio.h>
int main()
{
    // 6. [ Write a program to print a sum of two numbers . numbers taken by user ]
    int a, b, sum;
    printf("Enter your first number : ");
    scanf("%d", &a);
    printf("Enter your second number : ");
    scanf("%d", &b);
    sum = a + b;
    printf("%d", sum);

    return 0;
}