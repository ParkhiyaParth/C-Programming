// Write a program to generate first n number of Fibonacci series


#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,a=0,b=1,c;
    printf("Enter the number you have to find fibonacci series : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       {
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
       }
    return 0;
}