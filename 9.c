// Write a program to read marks of a student from keyboard whether the student is pass or fail(using if else)

#include <stdio.h>
#include <conio.h>
int main()
{
    int marks;
    printf("Enter the marks of the student out of 70 : ");
    scanf("%d", &marks);
    if (marks >= 24)
    {
        printf("Congratulation you are pass");
    }
    else
    {
        printf("Sorry you are fail");
    }
    return 0;
}