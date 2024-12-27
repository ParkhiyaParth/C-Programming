// Write a C program to enter a distance in to kilometre and convert it in to meter, feet, inches and centimetre

#include <stdio.h>
#include <conio.h>
int main()
{
    float k, meter, feet, inches, centimeter;
    printf("Enter distance into kilometer : ");
    scanf("%f", &k);
    meter = k * 1000;
    feet = k * 3280.84;
    inches = k * 39370.08;
    centimeter = k * 100000;
    printf("Meter = %f", meter);
    printf("\nFeet = %f", feet);
    printf("\nInches = %f", inches);
    printf("\nCentimeter = %f", centimeter);
    return 0;
}