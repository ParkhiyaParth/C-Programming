#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i,j;
    printf("Enter a number 0 for print star pattern and Enter a number 1 for reverse star pattern : ");
    scanf("%d",&num);
    if(num == 0)
      {
        for(i=1; i<=5; i++)
           {
            for(j=1; j<=i; j++)
               {
                printf("*");
               }
            printf("\n");   
           } 
      }
    else
      {
        for(i=5; i>=1; --i)
           {
            for(j=i; j>=1; --j)
               {
                printf("*");
               }
            printf("\n");   
           }
      }  
    return 0;
}
