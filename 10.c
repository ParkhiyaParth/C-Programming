// Write a program to read three numbers from keyboard and find out maximum out of these three. (nested if else)

#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    printf("Enter third number : ");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("%d is the largest", a);
        }
        else
        {
            printf("%d is the largesr", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("%d is the largest", b);
        }
        else
        {
            printf("%d is the largest", c);
        }
    }

    return 0;
}