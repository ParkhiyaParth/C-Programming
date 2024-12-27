#include<stdio.h>
#include<conio.h>
int fib_recursive(int n)
    {
        if(n == 1 || n == 2)
          {
            return n-1;
          }
        else
          {
            return (fib_recursive(n-1) + fib_recursive(n-2));
          }  
    }

int fib_itrative(int n)
    {
        int a=0,i;
        int b=1;
        for (i = 0; i < n-1; i++)
        {
            b = b - a; 
            a = b - a;   
        }
        return a;
    }    
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Fibonacci series using recursive : %d\n",fib_recursive(num));
    printf("Fibonacci series using itrative : %d",fib_itrative(num));
    return 0;
}