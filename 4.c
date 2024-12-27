// Write a C program to interchange two numbers.

#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    printf("Before interchanging \na=%d\tb=%d", a, b);
    a = b - a;
    b = b - a;
    a = a + b;
    printf("\nAfter interchanging \na=%d\tb=%d", a, b);
    return 0;
}