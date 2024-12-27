#include <stdio.h>
#include "2.c" \\ access of the file of 2.c
#define PI = 3.14
#define SQUARE (r) r *r

int main()
{
    int height;
    int r = 4;
    printf("Area of the circle is %f", PI * SQUARE(r));
}