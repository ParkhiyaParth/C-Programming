#include<stdio.h>
#include<conio.h>
int main()
{
    int i=10;
    int *p;
    p=&i;
    printf("Address of i = %d",p);
    return 0;
}