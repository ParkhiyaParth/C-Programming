// Write a C program to find factorial of a given number

#include <stdio.h>
#include <conio.h>
int main()
{
    int num, fact = 1;
    printf("Enter a number to find factorial : ");
    scanf("%d", &num);
    while (num > 1)
    {
        fact = fact * num;
        num = num - 1;
    }
    printf("Factorial = %d", fact);
    return 0;
}