// Write a C program to input an integer number and check the last digit of number is even or odd.

#include <stdio.h>
#include <conio.h>
int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    if ((number % 10) % 2 == 0)
    {
        printf("Enter number is even");
    }
    else
    {
        printf("Enter number is odd");
    }
    return 0;
}