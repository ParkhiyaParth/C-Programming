#include <stdio.h>
#include <conio.h>
int main()
{
    // typedef is used for give long name convert to short name.
    // syntax of typedef
    // typedef <previous_name or long_name> <alias_name or short_name>
    typedef unsigned long ul;
    ul l1, l2, l3;
    int sum;
    printf("Enter first number : ");
    scanf("%ul", &l1);
    printf("Enter second number : ");
    scanf("%ul", &l2);
    printf("Enter third number : ");
    scanf("%ul", &l3);
    sum = l1 + l2 + l3;
    printf("Sum=%d", sum);
    return 0;
}