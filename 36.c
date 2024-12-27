#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;
    for(i=1; i<=3; i++)
       {
        for(k=2;k<=i;k++)
           {
            printf(" ",k);
           }
        printf("\n");  
       }
    for(i=1; i<=3;i++)
       {
        for(j=1;j<=i;j++)
           {
            printf("%d",i);
           }
        printf("\n");   
       }   
    return 0;
}