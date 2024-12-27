#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[] = {5, 3, 4, 2, 1};
    int *n = arr;
    int i = 0, j = 0;
    for (i = 0; i <= 4; i++)
    {
        for (j = i + 1; j <= 5; j++)
        {
            if (*(n + i) > *(n + j))
            {
                *(n + i) = *(n + i) + *(n + j);
                *(n + j) = *(n + i) - *(n + j);
                *(n + i) = *(n + i) - *(n + j);
            }
        }
    }
    printf("Sorted values\n");
    for (i = 0; i <= 4; i++)
    {
        printf("%d", *(n + i));
    }
    return 0;
}