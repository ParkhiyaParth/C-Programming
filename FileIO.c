#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt", "r+");

    // use of fgetc
    char c = fgetc(ptr); // fgetc means it reads a one character.
    printf("The character i read was %c\n", c);
    c = fgetc(ptr);
    printf("The character i read was %c\n", c);

    // use of fgets
    char str[34];
    fgets(str,4,ptr);
    printf("The string is %s\n",str);

    // use of fputc
    fputc('o',ptr);

    // use of fputs
    fputs("This is parth",ptr);

    fclose(ptr);
    return 0;
}