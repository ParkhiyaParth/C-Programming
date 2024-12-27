#include<stdio.h>
#include<conio.h>
void Printstr(char str[])
     {
        int i=0;
        while(str[i]!='\0')
             {
                printf("%c",str[i]);
                i++;
             }  
        printf("\n");     
     }
int main()
{
    char str[45];
    gets(str);
    printf("Using custom function printstr : ");
    Printstr(str);
    printf("Using printf : %s\n",str);
    printf("Print using puts : ");
    puts(str);
    return 0;
}