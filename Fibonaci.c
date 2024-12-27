#include<stdio.h>
#include<conio.h>
int fib(int n)
    {
        if (n<=1)
        {
            return n;
        }
        else 
        {
            return(fib(n-1) + fib(n-2));
        }
    }
int main()
{
 int a,i;
 printf("Enter the number upto number you want recursion = ",a);
 scanf("%d",&a);
 for(i=0; i<=a; i++)
    {
        printf("%d ",fib(i));
    }
return 0;
}