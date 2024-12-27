#include<stdio.h>
#include<conio.h>
int swap(int *x,int *y)
    {
        int d;
        d=*x;
        *x=*y;
        *y=d;
    }
int main()
{
    int a=90,b=100;
    printf("%d %d\n",a,b);
    swap(&a,&b);
    printf("%d %d",a,b);
    return 0;
}