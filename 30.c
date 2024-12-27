#include<stdio.h>
#include<conio.h>
int main()
{
    int *x,*y,temp=0;
    printf("Enter x : ");
    scanf("%d",&x);
    printf("Enter y : ");
    scanf("%d",&y);
    printf("Values of x = %d and y = %d before swap",x,y);
    temp=*x;
    *x=temp+*y;
    *y=*y-temp;
    printf("Values of x = %d and y = %d after swap",x,y);
    return 0;
}