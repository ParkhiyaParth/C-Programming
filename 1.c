// Write a program to that performs as calculator ( addition, multiplication, division, subtraction).


#include <stdio.h>
#include <conio.h>
int main()
{
    int n1, n2, add, sub, mul, div;
    printf("Enter first number : ");
    scanf("%d", &n1);
    printf("\nEnter second number : ");
    scanf("%d", &n2);
    add = n1 + n2;
    sub = n1 - n2;
    mul = n1 * n2;
    div = n1 / n2;
    printf("additon : %d", add);
    printf("\nsubstraction : %d", sub);
    printf("\nmultiplication : %d", mul);
    printf("\nmultiplication : %d", div);
    return 0;
}