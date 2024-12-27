// Write a C program to check whether the entered character is capital, small letter, digit or any special character.

#include <stdio.h>
#include <conio.h>
int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("This is the capital letter");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("This is the small letter");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("This is the digit");
    }
    else
    {
        printf("This special the character");
    }
    return 0;
}