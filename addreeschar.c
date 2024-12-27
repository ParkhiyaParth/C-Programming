#include <stdio.h>
#include <conio.h>
int main()
{
    char name[] = "PARTH";
    char *ch = name;
    while (*ch != '\0')
    {
        printf("Address of %c is %u\n", *ch, ch);
        ch++;
    }
    return 0;
}