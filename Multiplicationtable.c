#include<stdio.h>
#include<conio.h>
int main()
{
    int number,i;
    printf("Enter a number that you want to multiplication of : ");
    scanf("%d",&number);
    for(i=1; i<=10;i++)
       {
             printf("%d X %d = %d \n",number,i,number*i);   
       }   

    return 0;
}
