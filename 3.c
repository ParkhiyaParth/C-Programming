// Write a program to calculate simple interest (i = (p*r*n)/100 )i = Simple interestp = Principal amountr = Rate of interestn = Number of years

#include <stdio.h>
#include <conio.h>
int main()
{
    float p, r, n, i;
    printf("Enter principle amount : ");
    scanf("%f", &p);
    printf("Enter rate of interest : ");
    scanf("%f", &r);
    printf("Enter number of years : ");
    scanf("%f", &n);
    i = (p * r * n) / 100;
    printf("Interest of rate is : %f", i);
    return 0;
}