// Write a C program to read no 1 to 7 and print relatively day Sunday to Saturday.

#include <stdio.h>
#include <conio.h>
int main()
{
    int day;
    printf("Enter a day number between 1 to 7: ");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
    {
        printf("Monday");
        break;
    }
    case 2:
    {
        printf("Tuesday");
        break;
    }
    case 3:
    {
        printf("Wednesday");
        break;
    }
    case 4:
    {
        printf("Thursday");
        break;
    }
    case 5:
    {
        printf("Friday");
        break;
    }
    case 6:
    {
        printf("Saturday");
        break;
    }
    case 7:
    {
        printf("Sunday");
        break;
    }
    }
    return 0;
}