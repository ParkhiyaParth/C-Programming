// Write a c program to sort given array in ascending order

#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[10], num, i,temp,j;
    printf("Enter elements");
    for (i = 0; i <= 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i <= 5; i++)
    {
        for (j = i + 1; j <= i; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Array elemetns : ");
    for (i = 0; i <= 5; i++)
    {
        printf(" %d", arr[i]);
    }
    return 0;
}