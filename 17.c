// Write a program to reverse a number.

#include<stdio.h>
#include<conio.h>
int main()
{
    int number,rev=0;
    printf("Enter number : ");
    scanf("%d",&number);
    while(number>0)
         {
            rev=(rev*10)+(number%10);
            number=number/10;
         }
    printf("Reverse number : %d",rev);     
    return 0;
}