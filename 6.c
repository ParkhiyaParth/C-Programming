// Write a program to compute Fahrenheit from centigrade (f=1.8*c +32)

#include <stdio.h>
#include <conio.h>
int main()
{
    float c, f;
    printf("Enter temperature in centigrade : ");
    scanf("%f", &c);
    f = 1.8 * c + 32;
    printf("Ferahanhit=%f", f);
    return 0;
}