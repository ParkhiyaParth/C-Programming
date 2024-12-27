// Write a C program to find out distance travelled by the equation d = ut + at^2

#include <stdio.h>
#include <conio.h>
int main()
{
    float a, u, t, d;
    printf("Enter a : ");
    scanf("%f", &a);
    printf("Enter u : ");
    scanf("%f", &u);
    printf("Enter t : ");
    scanf("%f", &t);
    d = u * t + (a * t * t) / 2;
    printf("Distance travelled : %f", d);
    return 0;
}