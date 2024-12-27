#include <stdio.h>
#include <conio.h>
int main()
{
    char ch = 'A';
    int i, j;
    for (i = 0; i <= 5; i++)
    {
        for (j = 0; j <= 5 - i; j++)
        {
            printf("%c", ch + j);
        }
        printf("\n");
    }
    return 0;
}