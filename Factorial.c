// #include<stdio.h>
// #include<conio.h>

// int factorial(int num)
//      {
//         int c;
//         if (num == 1 || num == 0)
//         {
//             return 1;
//         }
//         else
//         {
//         c = (num* factorial(num-1));
//         }
//         return c;
//      }     
// int main()
//     {
//         int number;
//         printf("Enter the number of factorial you want : \n");
//         scanf("%d",&number);
//         printf("The factoral of %d is %d",number,factorial(number));
//         return 0;
//     }
#include<stdio.h>
#include<conio.h>
int fact(int n)
    {
        if(n==0 || n==1)
          {
            return 1;
          }
        else 
          {
            return n * fact(n-1);
          }  
    }
int main()
{
    int n1;
    printf("Enter the number : ");
    scanf("%d",&n1);
    printf("factorial=%d",fact(n1));
    return 0;
}