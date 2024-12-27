// #include<stdio.h>
// int main()

//  {
//     int a,b;
//     printf("Enter a\n");
//     scanf("%d",&a);
//     printf("Enter b\n");
//     scanf("%d",&b);
//     printf("the sum is %d ",a+b);
//     return 0;
//  }

// #include<stdio.h>
// #include<conio.h>
// int add(int,int);
// int main()
// {
//    int a,b;
//    printf("Enter two Numbers : ");
//    scanf("%d %d",&a,&b);
//    add(a,b);
//    return 0;
// }
// int add(int x,int y)
//    {
//       printf("Addition = %d",x+y);
//    }

#include <stdio.h>
#include <conio.h>
int swap(int*, int*);
int main()
{
   int a, b;
   printf("Enter first number : ");
   scanf("%d", &a);
   printf("Enter second number : ");
   scanf("%d", &b);
   printf("Values of a = %d B = %d", a, b);
   swap(&a, &b);
   printf("Values after swap a = %d B = %d", a, b);
   return 0;
}
int swap(int *x, int *y)
{
   *y = *y - *x;
   *x = *x + *y;
   *y = *x - *y;
}