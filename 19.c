// Write a  cprogram to find out sum of first and last digit of a given number.

#include<stdio.h>
#include<conio.h>
int main()
{
    int num,last,sum;
    printf("Enter a number : ");
    scanf("%d",&num);
    last=num%10;
    while(num>9)
         {
            num=num/10;
         }
         sum=num+last;
    printf("Sum of the last and first digit = %d",sum);     
    return 0;
}