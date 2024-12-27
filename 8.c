// Write a C program to find that the accepted number is Negative, or Positive or Zero.

#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
label:
    printf("\nEnter a number : ");
    scanf("%d", &a);
    if (a == 0)
    {
        printf("number is zero");
    }
    else if (a >= 0)
    {
        printf("number is positive");
    }
    else
    {
        printf("number is negative");
    }
    goto label;
    return 0;
}