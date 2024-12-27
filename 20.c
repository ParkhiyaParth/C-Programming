// Write a C program to find the sum and average of different numbers which are accepted by user as many as user wants.

#include <stdio.h>
#include <conio.h>
int main()
{
    int n, num, i, sum = 0;
    float avg;
    printf("How many number you want?");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Enter number [%d] :", i);
        scanf("%d", &num);
        {
            sum = sum + num;
        }
    }
    printf("Sum=%d", sum);
    avg = sum / num;
    printf("avg=%f", avg);
    return 0;
}