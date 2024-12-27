// Write a C program to find out the Maximum and Minimum number from given 10 numbers

#include <stdio.h>
#include <conio.h>
int main()
{
    int num[10], i, max, min;
    for (i = 0; i <= 5; i++)
    {
        printf("Enter %d number : ", i);
        scanf("%d", &num[i]);
    }
    max = min = num[0];
    for (i = 1; i <= 5; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    printf("Maximum : %d", max);
    printf("Minimum :%d", min);
    return 0;
}