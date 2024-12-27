
// Write a program to find area of triangle(a=h*b*.5) a = area h = height b = base


#include <stdio.h>
#include <conio.h>
int main()
{
    int height, area, base;
    printf("Enter height of triangle : ");
    scanf("%d", &height);
    printf("Enter base of triangle : ");
    scanf("%d", &base);
    area = height * base * 0.5;
    printf("Area of triangle = %d", area);
    return 0;
}