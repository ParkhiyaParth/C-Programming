// Write a program to read marks from keyboard and your program should display equivalent grade according to following table(if else ladder) Marks Grade 100 – 80 Distinction 79 – 60 First Class 59 – 40 Second Class < 40 Fail

#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("Enter the marks of the student out of 100 : ");
    scanf("%d", &a);
    if (a <= 100 && a >= 80)
    {
        printf("You got distinction");
    }
    else if (a < 80 && a >= 60)
    {
        printf("You got first class");
    }
    else if (a < 60 && a >= 40)
    {
        printf("You got second class");
    }
    else
    {
        printf("You are fail");
    }
    return 0;
}