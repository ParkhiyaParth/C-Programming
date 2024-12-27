// Write a program to find out which number is even or odd from list of 10 numbers using array

#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[10], i, num;
    for (i = 1; i <= 10; i++)
    {
        printf("Enter %d number : ", i);
        scanf("%d", &arr[i]);
    }
    for (i = 1; i <= 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("odd\n", arr[i]);
        }
        else
        {
            printf("even", arr[i]);
        }
    }
    return 0;
}