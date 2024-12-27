#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 45;
    int *ptr = &a; // value change and see a magic.
    if (ptr != NULL)
    {
        printf("Tha address of a is %d", *ptr);
    }
    else
    {
        printf("Pointer is a null pointer that you can not derefernced");
    }
    return 0;
}