#include<stdio.h>
#include<conio.h>
int fib(int n)
    {
        if(n==1 || n==2)
          {
            return n-1;
          } 
        else  
          {
            return (fib(n-1) + fib(n-2));
          }  
    }
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Fibonacci series with recursive approch : %d",fib(num));
    return 0;
}