// Write a C program to read and store the roll no and marks of 20 students using array

#include <stdio.h>
#include <conio.h>
int main()
{
    int rollno[20], marks[20], i;
    for (i = 1; i <= 2; i++)
    {
        printf("Enter Roll no of student %d\n", i);
        scanf("%d", &rollno[i]);
        printf("Enter Marks of student %d\n", i);
        scanf("%d", &marks[i]);
    }
    for (i = 1; i <= 2; i++)
    {
        printf("Roll no : %d\tMarks : %d", rollno[i], marks[i]);
    }
    return 0;
}